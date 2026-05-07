// Class: HomingThistleLeaf


/* HomingThistleLeaf::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall
HomingThistleLeaf::OnCollideEntity(HomingThistleLeaf *this,BoardEntity *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  undefined8 uVar2;
  RtObject *this_01;
  ResourceInfo *pRVar3;
  
  if (this[0x1b0] == (HomingThistleLeaf)0x0) {
    this_00 = (RtWeakPtr *)(this + 0x1a8);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      this_01 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      bVar1 = Sexy::RtObject::IsA<ZombieZombossMech_Eighties>(this_01);
      if (!bVar1) {
        pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
        if (param_1 != (BoardEntity *)pRVar3) {
          return 0;
        }
      }
    }
  }
  uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HomingThistleLeaf::StaticClassInit() */

void HomingThistleLeaf::StaticClassInit(void)

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
    std::string::string(asStack_10,"HomingThistleLeaf");
    (*pcVar2)(plVar1,asStack_10,FUN_041e5bd0,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HomingThistleLeaf::StaticGetClass() */

long * HomingThistleLeaf::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HomingThistleLeaf",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HomingThistleLeaf::GetClass() const */

long * HomingThistleLeaf::GetClass(void)

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
  (*pcVar3)(plVar1,"HomingThistleLeaf",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HomingThistleLeaf::SetRotatedVelocity(float) */

void __thiscall HomingThistleLeaf::SetRotatedVelocity(HomingThistleLeaf *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_041e42d0(*(undefined4 *)(this + 0xc4));
  fVar2 = cosf(fVar1);
  fVar1 = sinf(fVar1);
  Projectile::SetVelocity((Projectile *)this,fVar2 * param_1,-(fVar1 * param_1),0.0);
  return;
}


/* HomingThistleLeaf::HomingThistleLeaf() */

void __thiscall HomingThistleLeaf::HomingThistleLeaf(HomingThistleLeaf *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06804490;
  *(undefined ***)(this + 0x10) = &PTR__HomingThistleLeaf_06804680;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  this[0x1b0] = (HomingThistleLeaf)0x0;
  return;
}


/* HomingThistleLeaf::StaticNew() */

HomingThistleLeaf * HomingThistleLeaf::StaticNew(void)

{
  HomingThistleLeaf *this;
  
  this = ::operator_new(0x1b8);
  HomingThistleLeaf(this);
  return this;
}


/* HomingThistleLeaf::~HomingThistleLeaf() */

void __thiscall HomingThistleLeaf::~HomingThistleLeaf(HomingThistleLeaf *this)

{
  *(undefined ***)this = &PTR_GetClass_06804490;
  *(undefined ***)(this + 0x10) = &PTR__HomingThistleLeaf_06804680;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to HomingThistleLeaf::~HomingThistleLeaf() */

void __thiscall HomingThistleLeaf::~HomingThistleLeaf(HomingThistleLeaf *this)

{
  ~HomingThistleLeaf(this + -0x10);
  return;
}


/* HomingThistleLeaf::~HomingThistleLeaf() */

void __thiscall HomingThistleLeaf::~HomingThistleLeaf(HomingThistleLeaf *this)

{
  ~HomingThistleLeaf(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HomingThistleLeaf::~HomingThistleLeaf() */

void __thiscall HomingThistleLeaf::~HomingThistleLeaf(HomingThistleLeaf *this)

{
  ~HomingThistleLeaf(this + -0x10);
  return;
}


/* HomingThistleLeaf::onDeflection(BoardEntity*) */

void HomingThistleLeaf::onDeflection(BoardEntity *param_1)

{
  FUN_041e42d4(0,param_1 + 0xc4);
  PineconePlantfoodProjectile::SetOverrideTarget
            ((PineconePlantfoodProjectile *)param_1,(BoardEntity *)0x0);
  param_1[0x1b0] = (BoardEntity)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HomingThistleLeaf::GetTargetPos(BoardEntity*) */

void __thiscall HomingThistleLeaf::GetTargetPos(HomingThistleLeaf *this,BoardEntity *param_1)

{
  bool bVar1;
  SexyVector3 *this_00;
  RtObject *this_01;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  Vec3 aVStack_28 [16];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_38);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1a8));
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
    bVar1 = Sexy::RtObject::IsA<ZombieZombossMech_Eighties>(this_01);
    if (bVar1) {
      local_38 = CollsionTargetCenterRg(param_1);
      lVar2 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
      uStack_34 = *(undefined4 *)(lVar2 + 4);
      local_30 = 0;
      goto LAB_041e5388;
    }
  }
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  fVar3 = (float)FUN_041e4330();
  uVar5 = 0;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,fVar3,0.0);
  uVar4 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_28);
  local_18 = CONCAT44(fVar3,uVar4);
  local_10 = uVar5;
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)&local_18);
LAB_041e5388:
  local_18 = CONCAT44(uStack_34,local_38);
  local_10 = local_30;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38,uStack_34,local_30);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HomingThistleLeaf::moveThroughTime(float) */

void HomingThistleLeaf::moveThroughTime(float param_1)

{
  char cVar1;
  HomingThistleLeaf *in_x0;
  ResourceInfo *this;
  ResourceInfo *pRVar2;
  SexyVector3 *pSVar3;
  long extraout_x0;
  float *pfVar4;
  DVec3 *this_00;
  Zombie *pZVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  undefined8 in_d1;
  undefined8 in_d2;
  double dVar10;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(in_x0 + 0x1a8));
  if (this == (ResourceInfo *)0x0) {
    Projectile::moveThroughTime((Projectile *)in_x0,param_1);
  }
  else {
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(in_x0 + 0x1a8));
    local_28 = (float)GetTargetPos(in_x0,(BoardEntity *)pRVar2);
    local_24 = (undefined4)in_d1;
    local_20 = (undefined4)in_d2;
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)in_x0);
    local_18 = (float)Sexy::SexyVector3::operator-((SexyVector3 *)&local_28,pSVar3);
    local_14 = (undefined4)in_d1;
    local_10 = (undefined4)in_d2;
    uVar6 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_18);
    fVar7 = (float)FUN_041e42d0(*(undefined4 *)(in_x0 + 0xc4));
    fVar8 = (float)ArmorflameMissile::calcDesiredRot(uVar6,in_d1,in_d2,fVar7);
    Projectile::GetProps((Projectile *)in_x0);
    nop();
    local_28 = ABS(fVar8 - fVar7);
    local_18 = *(float *)(extraout_x0 + 0x1e0) * 6.2831855 * param_1;
    pfVar4 = eastl::min_alt<float>(&local_28,&local_18);
    if ((long)(double)(fVar8 - fVar7) < 0) {
      dVar10 = (double)fVar7 + -ABS((double)*pfVar4);
    }
    else {
      dVar10 = (double)fVar7 + ABS((double)*pfVar4);
    }
    if (3.1415927410125732 < ABS(dVar10)) {
      dVar9 = 6.2831854820251465;
      if ((long)dVar10 < 0) {
        dVar9 = -6.2831854820251465;
      }
      dVar10 = dVar10 - dVar9;
    }
    FUN_041e42d4((float)dVar10,in_x0 + 0xc4);
    this_00 = (DVec3 *)Projectile::GetVelocity((Projectile *)in_x0);
    fVar7 = (float)DVec3::getLength(this_00);
    SetRotatedVelocity(in_x0,fVar7);
    Projectile::moveThroughTime((Projectile *)in_x0,param_1);
    pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)this);
    if (pZVar5 != (Zombie *)0x0) {
      uVar6 = FUN_041e42cc(*(undefined4 *)(in_x0 + 0x24));
      cVar1 = FUN_041e4190(pZVar5,uVar6);
      if (cVar1 != '\0') {
        PineconePlantfoodProjectile::SetOverrideTarget
                  ((PineconePlantfoodProjectile *)in_x0,(BoardEntity *)0x0);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HomingThistleLeaf::getCollisionEntities(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&, Sexy::TRect<int> const&) const */

void __thiscall
HomingThistleLeaf::getCollisionEntities(HomingThistleLeaf *this,vector *param_1,TRect *param_2)

{
  bool bVar1;
  ResourceInfo *pRVar2;
  GridItemProtectorShieldSegment *pGVar3;
  undefined8 *puVar4;
  ResourceInfo *local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1a8));
  if ((byte)this[0x1b0] < (pRVar2 != (ResourceInfo *)0x0)) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    Projectile::getCollisionEntities((Projectile *)this,(vector *)avStack_20,param_2);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (bVar1) {
      do {
        puVar4 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        local_38 = (ResourceInfo *)*puVar4;
        if (local_38 == (ResourceInfo *)0x0) {
          if (pRVar2 == (ResourceInfo *)0x0) {
LAB_041e6280:
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,
                       (BoardEntity **)&local_38);
          }
        }
        else {
          pGVar3 = Sexy::RtObject::Cast<GridItemProtectorShieldSegment>((RtObject *)local_38);
          if ((pGVar3 != (GridItemProtectorShieldSegment *)0x0) || (pRVar2 == local_38))
          goto LAB_041e6280;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28)
        ;
      } while (bVar1);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  else {
    Projectile::getCollisionEntities((Projectile *)this,param_1,param_2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

