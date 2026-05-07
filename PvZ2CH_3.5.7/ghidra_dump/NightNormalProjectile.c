// Class: NightNormalProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NightNormalProjectile::onUpdate(float) */

void NightNormalProjectile::onUpdate(float param_1)

{
  long lVar1;
  int iVar2;
  long *in_x0;
  int in_w4;
  int local_28;
  int local_20;
  int local_18;
  
  lVar1 = ___stack_chk_guard;
  Projectile::CalcSweptCollisionRectBoardSpace();
  iVar2 = FUN_04e3e588((int)in_x0[0x15]);
  BoardTransforms::GridToBoardSpaceRect
            ((BoardTransforms *)(ulong)*(uint *)(in_x0 + 0x35),iVar2,1,1,in_w4);
  if (local_18 < local_28 + local_20) {
    (**(code **)(*in_x0 + 0x48))();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NightNormalProjectile::StaticClassInit() */

void NightNormalProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"NightNormalProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04e3ede8,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NightNormalProjectile::StaticGetClass() */

long * NightNormalProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NightNormalProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NightNormalProjectile::GetClass() const */

long * NightNormalProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"NightNormalProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NightNormalProjectile::NightNormalProjectile() */

void __thiscall NightNormalProjectile::NightNormalProjectile(NightNormalProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_069ddd80;
  *(undefined ***)(this + 0x10) = &PTR__NightNormalProjectile_069ddf78;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c8));
  return;
}


/* NightNormalProjectile::StaticNew() */

NightNormalProjectile * NightNormalProjectile::StaticNew(void)

{
  NightNormalProjectile *this;
  
  this = ::operator_new(0x1e0);
  NightNormalProjectile(this);
  return this;
}


/* NightNormalProjectile::~NightNormalProjectile() */

void __thiscall NightNormalProjectile::~NightNormalProjectile(NightNormalProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069ddd80;
  *(undefined ***)(this + 0x10) = &PTR__NightNormalProjectile_069ddf78;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x1c8));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x1b0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to NightNormalProjectile::~NightNormalProjectile() */

void __thiscall NightNormalProjectile::~NightNormalProjectile(NightNormalProjectile *this)

{
  ~NightNormalProjectile(this + -0x10);
  return;
}


/* NightNormalProjectile::~NightNormalProjectile() */

void __thiscall NightNormalProjectile::~NightNormalProjectile(NightNormalProjectile *this)

{
  ~NightNormalProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NightNormalProjectile::~NightNormalProjectile() */

void __thiscall NightNormalProjectile::~NightNormalProjectile(NightNormalProjectile *this)

{
  ~NightNormalProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NightNormalProjectile::onSpawnProjectiles(BoardEntity*) */

void __thiscall
NightNormalProjectile::onSpawnProjectiles(NightNormalProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  RtObject *pRVar5;
  NightNormalBallProjectileProps *pNVar6;
  RtWeakPtrBase *pRVar7;
  undefined8 *puVar8;
  Projectile *this_01;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  Board *pBVar13;
  undefined4 uVar12;
  undefined8 local_70;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b0);
  local_8 = ___stack_chk_guard;
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  uVar2 = BoardEntity::CalcColumnPosition(param_1);
  local_40 = CONCAT44(local_40._4_4_,uVar2);
  local_70 = std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                       (uVar3,uVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_40);
  if ((param_1 != (BoardEntity *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) {
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_70,(__normal_iterator *)&local_40);
    if (bVar1) {
      iVar9 = 0;
      uVar2 = BoardEntity::CalcColumnPosition(param_1);
      local_40 = CONCAT44(local_40._4_4_,uVar2);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)this_00,(int *)&local_40);
      pRVar5 = (RtObject *)Projectile::GetProps((Projectile *)this);
      pNVar6 = Sexy::RtObject::Cast<NightNormalBallProjectileProps>(pRVar5);
      local_60 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(pNVar6 + 0x1e0));
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(pNVar6 + 0x1e0));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58),
            bVar1) {
        pRVar7 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,pRVar7);
        uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
        puVar8 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this);
                    /* WARNING: Load size is inaccurate */
        pBVar13._0_4_ = *puVar8;
        uVar2 = *(undefined4 *)((long)puVar8 + 4);
        uVar12 = *(undefined4 *)(puVar8 + 1);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_68);
        uVar3 = Projectile::GetInstigator((Projectile *)this);
        pRVar5 = (RtObject *)
                 Board::AddProjectile
                           (pBVar13._0_4_,uVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_40,uVar3,0)
        ;
        this_01 = Sexy::RtObject::Cast<Projectile>(pRVar5);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        RealObject::JoinTeam((RealObject *)this_01,1);
        puVar8 = (undefined8 *)Projectile::GetVelocity(this_01);
        local_50 = *puVar8;
        local_48 = *(undefined4 *)(puVar8 + 1);
        Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
        if (iVar9 == 0) {
          fVar11 = (float)Sexy::SexyMath::DegToRad(90.0);
          fVar11 = -fVar11;
        }
        else {
          fVar11 = (float)Sexy::SexyMath::DegToRad(90.0);
        }
        iVar9 = iVar9 + 1;
        Sexy::SexyTransform2D::RotateRad(aSStack_30,fVar11);
        uVar10 = Sexy::SexyMatrix3::operator*((SexyMatrix3 *)aSStack_30,(SexyVector3 *)&local_50);
        local_40 = CONCAT44(uVar2,uVar10);
        local_38 = uVar12;
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_50,(SexyVector3 *)&local_40);
        FUN_04e3e628(fVar11,this_01 + 0xc4);
        Projectile::SetVelocity(this_01,(SexyVector3 *)&local_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NightNormalProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
NightNormalProjectile::OnCollideEntity(NightNormalProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Zombie *pZVar5;
  RtObject *this_01;
  NightNormalBallProjectileProps *pNVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  BoardEntity *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1c8);
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,BoardEntity*>
                       (uVar3,uVar4,local_28);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  uVar2 = 0;
  if (bVar1) {
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)this_00,local_28);
    if (this[0x191] != (NightNormalProjectile)0x0) {
      MessageRouter::Post<Projectile*,BoardEntity*,NightNormalProjectile*,BoardEntity*>
                ((MessageRouter *)gMessageRouter,Message::NotifyProjectileCollideEntity,this,
                 local_28[0]);
    }
    Projectile::playSound((Projectile *)this,local_28[0]);
    (**(code **)(*(long *)this + 0x1b0))(this,local_28[0]);
    if ((local_28[0] != (BoardEntity *)0x0) &&
       (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)local_28[0]), bVar1)) {
      pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)local_28[0]);
      this_01 = (RtObject *)Projectile::GetProps((Projectile *)this);
      pNVar6 = Sexy::RtObject::Cast<NightNormalBallProjectileProps>(this_01);
      fVar7 = *(float *)(this + 0x170);
      fVar9 = *(float *)(pNVar6 + 0x1f8);
      fVar8 = *(float *)(this + 0x180);
      Zombie::ApplyCondition((Zombie *)0x40000000,0,pZVar5,0x30,1);
      Zombie::SetConditionTracker(fVar7 * fVar9 * fVar8,pZVar5,0x30);
    }
    (**(code **)(*(long *)this + 0x1e0))(this,local_28[0]);
    uVar2 = (**(code **)(*(long *)this + 0x168))(this,local_28[0]);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* NightNormalProjectile::InitialSetPosition(float, float, float) */

void __thiscall
NightNormalProjectile::InitialSetPosition
          (NightNormalProjectile *this,float param_1,float param_2,float param_3)

{
  int iVar1;
  
  Projectile::InitialSetPosition((Projectile *)this,param_1,param_2,param_3);
  iVar1 = BoardTransforms::BoardSpaceToGridX(param_1);
  *(int *)(this + 0x1a8) = iVar1 + 6;
  return;
}

