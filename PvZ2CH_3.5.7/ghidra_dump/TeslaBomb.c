// Class: TeslaBomb


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TeslaBomb::StaticClassInit() */

void TeslaBomb::StaticClassInit(void)

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
    std::string::string(asStack_10,"TeslaBomb");
    (*pcVar2)(plVar1,asStack_10,FUN_03c1c39c,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TeslaBomb::StaticGetClass() */

long * TeslaBomb::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TeslaBomb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TeslaBomb::GetClass() const */

long * TeslaBomb::GetClass(void)

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
  (*pcVar3)(plVar1,"TeslaBomb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TeslaBomb::~TeslaBomb() */

void __thiscall TeslaBomb::~TeslaBomb(TeslaBomb *this)

{
  *(undefined ***)this = &PTR_GetClass_067495f0;
  *(undefined ***)(this + 0x10) = &PTR__TeslaBomb_067497e0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to TeslaBomb::~TeslaBomb() */

void __thiscall TeslaBomb::~TeslaBomb(TeslaBomb *this)

{
  ~TeslaBomb(this + -0x10);
  return;
}


/* TeslaBomb::~TeslaBomb() */

void __thiscall TeslaBomb::~TeslaBomb(TeslaBomb *this)

{
  ~TeslaBomb(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TeslaBomb::~TeslaBomb() */

void __thiscall TeslaBomb::~TeslaBomb(TeslaBomb *this)

{
  ~TeslaBomb(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TeslaBomb::TeslaBomb() */

void __thiscall TeslaBomb::TeslaBomb(TeslaBomb *this)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (TeslaBomb)0x0;
  *(undefined ***)this = &PTR_GetClass_067495f0;
  *(undefined ***)(this + 0x10) = &PTR__TeslaBomb_067497e0;
  *(undefined4 *)(this + 0x1a8) = 0;
  Sexy::Point::Point((Point *)(this + 0x1ac));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b8));
  Board::GetGameSubSystem<AlarmSagittifoliaAvatarSkillSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1b8),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TeslaBomb::StaticNew() */

TeslaBomb * TeslaBomb::StaticNew(void)

{
  TeslaBomb *this;
  
  this = ::operator_new(0x1c0);
  TeslaBomb(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TeslaBomb::onDestroy() */

void __thiscall TeslaBomb::onDestroy(TeslaBomb *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *pZVar4;
  AlarmSagittifoliaAvatarSkillSystem *this_00;
  float fVar5;
  DamageInfo *pDVar6;
  Point aPStack_a8 [8];
  Point aPStack_a0 [8];
  undefined8 local_98;
  Insets aIStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  Sexy::Insets::Insets(aIStack_90,*(int *)(this + 0x1ac) + -2,*(int *)(this + 0x1b0) + -2,5,5);
  EntityFinder::GetEntitiesInGridSquares(avStack_80,2,aIStack_90);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_68[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_80);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)local_68);
    if (!bVar1) break;
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar3);
    if ((((bVar1) &&
         (pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3), pZVar4 != (Zombie *)0x0)) &&
        (cVar2 = (**(code **)(*(long *)pZVar4 + 0x328))(), cVar2 == '\0')) &&
       (cVar2 = (**(code **)(*(long *)pZVar4 + 0x330))(pZVar4), cVar2 == '\0')) {
      Zombie::ApplyCondition((Zombie *)0x40000000,0,pZVar4,0x18,1);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
  }
  if (this[0x1a5] != (TeslaBomb)0x0) {
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1b8));
    if (cVar2 != '\0') {
      this_00 = (AlarmSagittifoliaAvatarSkillSystem *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
      fVar5 = (float)PVZ_T();
      Sexy::Point::Point(aPStack_a8,*(int *)(this + 0x1ac),*(int *)(this + 0x1b0));
                    /* WARNING: Load size is inaccurate */
      pDVar6._0_4_ = *(DamageInfo **)(this + 0x1a8);
      Sexy::Point::Point(aPStack_a0,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
      DamageInfo::DamageInfo
                (pDVar6._0_4_,(undefined4)local_98,local_98._4_4_,(DamageInfo *)local_68,0x80,0,
                 aPStack_a0,0);
      AlarmSagittifoliaAvatarSkillSystem::CreateEffect
                (this_00,fVar5 + 6.0,aPStack_a8,(DamageInfo *)local_68);
      DamageInfo::~DamageInfo((DamageInfo *)local_68);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

