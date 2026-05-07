// Class: NarcissusAvatarProjectile


/* NarcissusAvatarProjectile::~NarcissusAvatarProjectile() */

void __thiscall
NarcissusAvatarProjectile::~NarcissusAvatarProjectile(NarcissusAvatarProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_068184c0;
  *(undefined ***)(this + 0x10) = &PTR__NarcissusAvatarProjectile_068186b0;
  NarcissusPlantfoodProjectile::~NarcissusPlantfoodProjectile((NarcissusPlantfoodProjectile *)this);
  return;
}


/* non-virtual thunk to NarcissusAvatarProjectile::~NarcissusAvatarProjectile() */

void __thiscall
NarcissusAvatarProjectile::~NarcissusAvatarProjectile(NarcissusAvatarProjectile *this)

{
  ~NarcissusAvatarProjectile(this + -0x10);
  return;
}


/* NarcissusAvatarProjectile::~NarcissusAvatarProjectile() */

void __thiscall
NarcissusAvatarProjectile::~NarcissusAvatarProjectile(NarcissusAvatarProjectile *this)

{
  ~NarcissusAvatarProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NarcissusAvatarProjectile::~NarcissusAvatarProjectile() */

void __thiscall
NarcissusAvatarProjectile::~NarcissusAvatarProjectile(NarcissusAvatarProjectile *this)

{
  ~NarcissusAvatarProjectile(this + -0x10);
  return;
}


/* NarcissusAvatarProjectile::NarcissusAvatarProjectile() */

void __thiscall
NarcissusAvatarProjectile::NarcissusAvatarProjectile(NarcissusAvatarProjectile *this)

{
  NarcissusPlantfoodProjectile::NarcissusPlantfoodProjectile((NarcissusPlantfoodProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_068184c0;
  *(undefined ***)(this + 0x10) = &PTR__NarcissusAvatarProjectile_068186b0;
  return;
}


/* NarcissusAvatarProjectile::StaticNew() */

NarcissusAvatarProjectile * NarcissusAvatarProjectile::StaticNew(void)

{
  NarcissusAvatarProjectile *this;
  
  this = ::operator_new(0x1a8);
  NarcissusAvatarProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NarcissusAvatarProjectile::StaticClassInit() */

void NarcissusAvatarProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"NarcissusAvatarProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0424e138,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NarcissusAvatarProjectile::StaticGetClass() */

long * NarcissusAvatarProjectile::StaticGetClass(void)

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
  uVar2 = NarcissusPlantfoodProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"NarcissusAvatarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NarcissusAvatarProjectile::GetClass() const */

long * NarcissusAvatarProjectile::GetClass(void)

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
  uVar2 = NarcissusPlantfoodProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"NarcissusAvatarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NarcissusAvatarProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
NarcissusAvatarProjectile::OnCollideEntity(NarcissusAvatarProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Zombie *this_00;
  long lVar5;
  ZombieTosserSubSystem *pZVar6;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b8 [72];
  TitleStatus aTStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((((param_1 != (BoardEntity *)0x0) &&
        (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) &&
       (nop(), this_00 != (Zombie *)0x0)) &&
      ((iVar3 = Zombie::GetSizeType(this_00), iVar3 == 1 &&
       (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0')))) &&
     ((cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0' &&
      ((cVar2 = Zombie::IsIgnoringAllDamage(this_00), cVar2 == '\0' &&
       (cVar2 = RealObject::IsOnTeam(this_00,2), cVar2 != '\0')))))) {
    Zombie::GetCurrentTitleStatus();
    TitleStatus::~TitleStatus(aTStack_70);
    if (local_58 == '\0') {
      iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
      iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
      if (iVar3 < iVar4 + -1) {
        iVar3 = BoardTransforms::GridToBoardSpaceX(iVar3 + 2);
        lVar5 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this_00);
        EATextSquish::Vec3::Vec3
                  ((Vec3 *)aTStack_70,(float)iVar3,*(float *)(lVar5 + 4),*(float *)(lVar5 + 8));
        pZVar6 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b8);
        ZombieTosserSubSystem::LaunchZombie
                  ((ZombieTosserSubSystem *)0x42480000,0x3ecccccd,pZVar6,this_00,aTStack_70,
                   aRStack_b8,0);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_b8);
      }
    }
  }
  NarcissusPlantfoodProjectile::OnCollideEntity((NarcissusPlantfoodProjectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

