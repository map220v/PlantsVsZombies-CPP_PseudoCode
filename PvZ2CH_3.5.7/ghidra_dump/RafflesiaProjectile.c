// Class: RafflesiaProjectile


/* RafflesiaProjectile::onFallDown(std::string const&) */

void RafflesiaProjectile::onFallDown(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x118))();
  return;
}


/* RafflesiaProjectile::onProjectileInitialized() */

void __thiscall RafflesiaProjectile::onProjectileInitialized(RafflesiaProjectile *this)

{
  DailySignActivityWidget::setIsCanAwardToday((DailySignActivityWidget *)this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RafflesiaProjectile::StaticClassInit() */

void RafflesiaProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"RafflesiaProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_040be6a8,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RafflesiaProjectile::StaticGetClass() */

long * RafflesiaProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RafflesiaProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RafflesiaProjectile::GetClass() const */

long * RafflesiaProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"RafflesiaProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RafflesiaProjectile::RafflesiaProjectile() */

void __thiscall RafflesiaProjectile::RafflesiaProjectile(RafflesiaProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067d6fd0;
  *(undefined ***)(this + 0x10) = &PTR__RafflesiaProjectile_067d71c0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  return;
}


/* RafflesiaProjectile::StaticNew() */

RafflesiaProjectile * RafflesiaProjectile::StaticNew(void)

{
  RafflesiaProjectile *this;
  
  this = ::operator_new(0x1b0);
  RafflesiaProjectile(this);
  return this;
}


/* RafflesiaProjectile::~RafflesiaProjectile() */

void __thiscall RafflesiaProjectile::~RafflesiaProjectile(RafflesiaProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067d6fd0;
  *(undefined ***)(this + 0x10) = &PTR__RafflesiaProjectile_067d71c0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to RafflesiaProjectile::~RafflesiaProjectile() */

void __thiscall RafflesiaProjectile::~RafflesiaProjectile(RafflesiaProjectile *this)

{
  ~RafflesiaProjectile(this + -0x10);
  return;
}


/* RafflesiaProjectile::~RafflesiaProjectile() */

void __thiscall RafflesiaProjectile::~RafflesiaProjectile(RafflesiaProjectile *this)

{
  ~RafflesiaProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RafflesiaProjectile::~RafflesiaProjectile() */

void __thiscall RafflesiaProjectile::~RafflesiaProjectile(RafflesiaProjectile *this)

{
  ~RafflesiaProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RafflesiaProjectile::findTarget() */

void __thiscall RafflesiaProjectile::findTarget(RafflesiaProjectile *this)

{
  RtWeakPtr<CthulhuPropertySheet> *this_00;
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  ulong uVar9;
  ResourceInfo *pRVar10;
  long *plVar11;
  RtObject *pRVar12;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var13;
  long lVar14;
  RtObject *this_01;
  Zombie *pZVar15;
  _func_void *extraout_x1;
  ulong uVar16;
  float fVar17;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined4 local_30 [4];
  int local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  long local_8;
  
  this_00 = (RtWeakPtr<CthulhuPropertySheet> *)(this + 0x1a8);
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)this_00);
  uVar16 = 0;
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_20,extraout_x1);
  Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=(this_00,(RtId *)&local_20);
  Sexy::RtId::~RtId((RtId *)&local_20);
  pfVar7 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar4 = BoardTransforms::BoardSpaceToGridX(*pfVar7);
  iVar5 = FUN_040bb944(*(undefined4 *)(this + 0xa8));
  local_30[0] = 1;
  iVar6 = BoardConstants::NUMBER_OF_COLUMNS();
  local_20 = (iVar6 - iVar4) + 1;
  piVar8 = eastl::max_alt<int>((int *)local_30,&local_20);
  iVar6 = *piVar8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  Sexy::Insets::Insets((Insets *)local_30,iVar4,iVar5,iVar6,1);
  EntityFinder::GetEntitiesInGridSquares((exception_ptr *)&local_20,2,(Insets *)local_30);
  while( true ) {
    uVar1 = CONCAT44(uStack_1c,local_20);
    uVar9 = FUN_040bb96c(uVar1,local_18);
    if (uVar9 <= uVar16) break;
    FUN_040bb978(uVar1,uVar16);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_38);
    cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pRVar10);
    if (cVar2 != '\0') {
      plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar2 = (**(code **)(*plVar11 + 0x328))();
      if (cVar2 == '\0') {
        plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        cVar2 = (**(code **)(*plVar11 + 0x330))();
        if (cVar2 == '\0') {
          pRVar12 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          bVar3 = Sexy::RtObject::IsA<Zomboss>(pRVar12);
          if (bVar3) {
            pZVar15 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
            cVar2 = Zombie::IsFlying(pZVar15);
            if (cVar2 != '\0') goto LAB_040bd878;
            pRVar12 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
            bVar3 = Sexy::RtObject::IsA<ZombieZombossMech>(pRVar12);
            if (bVar3) goto LAB_040bdb90;
          }
          else {
            pRVar12 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
            bVar3 = Sexy::RtObject::IsA<ZombieZombossMech>(pRVar12);
            if (bVar3) {
LAB_040bdb90:
              pZVar15 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
              cVar2 = Zombie::IsFlying(pZVar15);
              if (cVar2 != '\0') goto LAB_040bd878;
            }
          }
          p_Var13 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          pfVar7 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(p_Var13);
          fVar17 = *pfVar7;
          lVar14 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
          if (fVar17 <= *(float *)(lVar14 + 0x10)) {
            cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
            if (cVar2 == '\0') {
LAB_040bd9c4:
              Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                        ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_38
                        );
            }
            else {
              cVar2 = Sexy::RtWeakPtrBase::operator!=
                                ((RtWeakPtrBase *)this_00,(RtWeakPtrBase *)aRStack_38);
              if (cVar2 != '\0') {
                p_Var13 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
                pfVar7 = (float *)std::
                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  ::_M_leftmost(p_Var13);
                fVar17 = *pfVar7;
                p_Var13 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
                pfVar7 = (float *)std::
                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  ::_M_leftmost(p_Var13);
                if (fVar17 < *pfVar7) goto LAB_040bd9c4;
              }
            }
          }
        }
      }
    }
LAB_040bd878:
    uVar16 = uVar16 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  }
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  if (cVar2 == '\0') {
    uVar16 = 0;
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    Sexy::Insets::Insets((Insets *)local_30,iVar4,iVar5,9 - iVar4,1);
    EntityFinder::GetEntitiesInGridSquares((exception_ptr *)&local_20,4,(Insets *)local_30);
    while( true ) {
      uVar1 = CONCAT44(uStack_1c,local_20);
      uVar9 = FUN_040bb96c(uVar1,local_18);
      if (uVar9 <= uVar16) break;
      FUN_040bb978(uVar1,uVar16);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
      cVar2 = (**(code **)(*(long *)this_01 + 0x200))(this_01);
      if (((cVar2 != '\0') &&
          (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)this_01),
          cVar2 != '\0')) && (bVar3 = Sexy::RtObject::IsA<GridItemFlame>(this_01), !bVar3)) {
        bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_40);
        if (bVar3) {
          p_Var13 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          pfVar7 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(p_Var13);
          fVar17 = *pfVar7;
          p_Var13 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          pfVar7 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(p_Var13);
          if (fVar17 < *pfVar7) goto LAB_040bda24;
        }
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
        if (cVar2 == '\0') {
LAB_040bdb14:
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_38);
        }
        else {
          cVar2 = Sexy::RtWeakPtrBase::operator!=
                            ((RtWeakPtrBase *)this_00,(RtWeakPtrBase *)aRStack_38);
          if (cVar2 != '\0') {
            p_Var13 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            pfVar7 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost(p_Var13);
            fVar17 = *pfVar7;
            p_Var13 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
            pfVar7 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost(p_Var13);
            if (fVar17 < *pfVar7) goto LAB_040bdb14;
          }
        }
      }
LAB_040bda24:
      uVar16 = uVar16 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RafflesiaProjectile::onUpdate(float) */

void RafflesiaProjectile::onUpdate(float param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  Vec3 *this_01;
  SexyVector3 *pSVar2;
  PopAnimRig *pPVar3;
  float fVar4;
  undefined4 in_s1;
  undefined4 in_s2;
  DVec3 aDStack_70 [4];
  undefined4 local_6c;
  undefined4 local_68;
  Vec3 aVStack_60 [16];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  this = (RtMixedPtrBase *)(in_x0 + 0x1a8);
  local_8 = ___stack_chk_guard;
  DVec3::DVec3(aDStack_70);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 == '\0') {
    this_01 = aVStack_60;
    findTarget((RafflesiaProjectile *)in_x0);
    in_s1 = 0;
    in_s2 = 0;
    EATextSquish::Vec3::Vec3(this_01,950.0,0.0,0.0);
  }
  else {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    this_01 = (Vec3 *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_00);
  }
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x0);
  local_50 = Sexy::SexyVector3::operator-((SexyVector3 *)this_01,pSVar2);
  local_4c = in_s1;
  local_48 = in_s2;
  Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_70,(SexyVector3 *)&local_50);
  local_6c = 0;
  local_68 = 0;
  fVar4 = (float)Sexy::SexyVector3::MagnitudeSquared((SexyVector3 *)aDStack_70);
  if (fVar4 <= 25.0) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar1 == '\0') {
      (**(code **)(*(long *)in_x0 + 0x48))();
    }
    else {
      Projectile::SetPaused((Projectile *)in_x0,true);
      pPVar3 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)in_x0);
      std::string::string((string *)aVStack_60,"down");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)in_x0,onFallDown);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<RafflesiaProjectile,void(RafflesiaProjectile::*)(std::string_const&)>
                (aDStack_38,(SexyVector3 *)&local_50);
      PopAnimRig::PlayAndStop(pPVar3,(string *)aVStack_60,0,aDStack_38);
      std::string::~string((string *)aVStack_60);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

