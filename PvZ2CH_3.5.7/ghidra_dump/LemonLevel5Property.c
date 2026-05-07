// Class: LemonLevel5Property


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LemonLevel5Property::OnCollideRoof() */

void __thiscall LemonLevel5Property::OnCollideRoof(LemonLevel5Property *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)Projectile::GetVelocity((Projectile *)this);
  local_18 = *puVar2;
  local_10 = *(undefined4 *)(puVar2 + 1);
  if (0.0 < (float)local_18) {
    uVar1 = (ulong)local_18 >> 0x20;
    local_18 = CONCAT44((int)uVar1,-(float)local_18);
    Projectile::SetVelocity((Projectile *)this,(SexyVector3 *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LemonLevel5Property::StaticClassInit() */

void LemonLevel5Property::StaticClassInit(void)

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
    std::string::string(asStack_10,"LemonLevel5Property");
    (*pcVar2)(plVar1,asStack_10,FUN_04095f74,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LemonLevel5Property::StaticGetClass() */

long * LemonLevel5Property::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LemonLevel5Property",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LemonLevel5Property::GetClass() const */

long * LemonLevel5Property::GetClass(void)

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
  (*pcVar3)(plVar1,"LemonLevel5Property",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LemonLevel5Property::~LemonLevel5Property() */

void __thiscall LemonLevel5Property::~LemonLevel5Property(LemonLevel5Property *this)

{
  *(undefined ***)this = &PTR_GetClass_067ceb90;
  *(undefined ***)(this + 0x10) = &PTR__LemonLevel5Property_067ced80;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to LemonLevel5Property::~LemonLevel5Property() */

void __thiscall LemonLevel5Property::~LemonLevel5Property(LemonLevel5Property *this)

{
  ~LemonLevel5Property(this + -0x10);
  return;
}


/* LemonLevel5Property::~LemonLevel5Property() */

void __thiscall LemonLevel5Property::~LemonLevel5Property(LemonLevel5Property *this)

{
  ~LemonLevel5Property(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LemonLevel5Property::~LemonLevel5Property() */

void __thiscall LemonLevel5Property::~LemonLevel5Property(LemonLevel5Property *this)

{
  ~LemonLevel5Property(this + -0x10);
  return;
}


/* LemonLevel5Property::LemonLevel5Property() */

void __thiscall LemonLevel5Property::LemonLevel5Property(LemonLevel5Property *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067ceb90;
  *(undefined ***)(this + 0x10) = &PTR__LemonLevel5Property_067ced80;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  return;
}


/* LemonLevel5Property::StaticNew() */

LemonLevel5Property * LemonLevel5Property::StaticNew(void)

{
  LemonLevel5Property *this;
  
  this = ::operator_new(0x1b0);
  LemonLevel5Property(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LemonLevel5Property::onUpdate(float) */

void LemonLevel5Property::onUpdate(float param_1)

{
  RtWeakPtr *this;
  ulong uVar1;
  bool bVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar4;
  undefined8 *puVar5;
  long lVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar7;
  PlantLemon *this_01;
  float fVar8;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  this = (RtWeakPtr *)(in_x0 + 0x1a8);
  local_8 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar2) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    iVar3 = FUN_040944fc(*(undefined1 *)(lVar6 + 0x299));
    if (iVar3 == 0) {
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_00);
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(in_x0);
      fVar8 = *pfVar7;
      if (fVar8 < *pfVar4) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        nop();
        PlantLemon::playBack(this_01);
        (**(code **)(*(long *)in_x0 + 0x48))();
        fVar8 = *pfVar7;
      }
      goto LAB_04095918;
    }
  }
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  fVar8 = *pfVar4;
LAB_04095918:
  if (800.0 < fVar8) {
    puVar5 = (undefined8 *)Projectile::GetVelocity((Projectile *)in_x0);
    local_18 = *puVar5;
    local_10 = *(undefined4 *)(puVar5 + 1);
    if (0.0 < (float)local_18) {
      uVar1 = (ulong)local_18 >> 0x20;
      local_18 = CONCAT44((int)uVar1,-(float)local_18);
      Projectile::SetVelocity((Projectile *)in_x0,(SexyVector3 *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LemonLevel5Property::OnCollideEntity(BoardEntity*) */

void __thiscall LemonLevel5Property::OnCollideEntity(LemonLevel5Property *this,BoardEntity *param_1)

{
  ulong uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  long lVar7;
  ZombieTosserSubSystem *pZVar8;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b8 [72];
  undefined8 local_70;
  undefined4 local_68;
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((param_1 != (BoardEntity *)0x0) &&
       (bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar2)) &&
      (nop(), this_00 != (Zombie *)0x0)) &&
     (((iVar4 = Zombie::GetSizeType(this_00), iVar4 == 0 &&
       (cVar3 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar3 == '\0')) &&
      ((cVar3 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar3 == '\0' &&
       (cVar3 = Zombie::IsIgnoringAllDamage(this_00), cVar3 == '\0')))))) {
    cVar3 = RealObject::IsOnTeam(this_00,2);
    if (cVar3 != '\0') {
      Zombie::GetCurrentTitleStatus();
      TitleStatus::~TitleStatus((TitleStatus *)&local_70);
      if (local_58 == '\0') {
        iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
        iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
        if (iVar4 < iVar5 + -1) {
          iVar4 = BoardTransforms::GridToBoardSpaceX(iVar4 + 1);
          lVar7 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)this_00);
          EATextSquish::Vec3::Vec3
                    ((Vec3 *)&local_70,(float)iVar4,*(float *)(lVar7 + 4),*(float *)(lVar7 + 8));
          pZVar8 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b8);
          ZombieTosserSubSystem::LaunchZombie
                    ((ZombieTosserSubSystem *)0x42480000,0x3f800000,pZVar8,this_00,
                     (TitleStatus *)&local_70,aRStack_b8,0);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_b8);
        }
        this_00[0x7e9] = (Zombie)0x1;
      }
    }
  }
  puVar6 = (undefined8 *)Projectile::GetVelocity((Projectile *)this);
  local_70 = *puVar6;
  local_68 = *(undefined4 *)(puVar6 + 1);
  if (0.0 < (float)local_70) {
    uVar1 = (ulong)local_70 >> 0x20;
    local_70 = CONCAT44((int)uVar1,-(float)local_70);
    Projectile::SetVelocity((Projectile *)this,(SexyVector3 *)&local_70);
  }
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

