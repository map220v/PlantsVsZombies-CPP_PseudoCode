// Class: StephaniaPlantfoodProjectile


/* StephaniaPlantfoodProjectile::~StephaniaPlantfoodProjectile() */

void __thiscall
StephaniaPlantfoodProjectile::~StephaniaPlantfoodProjectile(StephaniaPlantfoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067e1910;
  *(undefined ***)(this + 0x10) = &PTR__StephaniaPlantfoodProjectile_067e1b00;
  StephaniaProjectile::~StephaniaProjectile((StephaniaProjectile *)this);
  return;
}


/* non-virtual thunk to StephaniaPlantfoodProjectile::~StephaniaPlantfoodProjectile() */

void __thiscall
StephaniaPlantfoodProjectile::~StephaniaPlantfoodProjectile(StephaniaPlantfoodProjectile *this)

{
  ~StephaniaPlantfoodProjectile(this + -0x10);
  return;
}


/* StephaniaPlantfoodProjectile::~StephaniaPlantfoodProjectile() */

void __thiscall
StephaniaPlantfoodProjectile::~StephaniaPlantfoodProjectile(StephaniaPlantfoodProjectile *this)

{
  ~StephaniaPlantfoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to StephaniaPlantfoodProjectile::~StephaniaPlantfoodProjectile() */

void __thiscall
StephaniaPlantfoodProjectile::~StephaniaPlantfoodProjectile(StephaniaPlantfoodProjectile *this)

{
  ~StephaniaPlantfoodProjectile(this + -0x10);
  return;
}


/* StephaniaPlantfoodProjectile::StephaniaPlantfoodProjectile() */

void __thiscall
StephaniaPlantfoodProjectile::StephaniaPlantfoodProjectile(StephaniaPlantfoodProjectile *this)

{
  StephaniaProjectile::StephaniaProjectile((StephaniaProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_067e1910;
  *(undefined ***)(this + 0x10) = &PTR__StephaniaPlantfoodProjectile_067e1b00;
  return;
}


/* StephaniaPlantfoodProjectile::StaticNew() */

StephaniaPlantfoodProjectile * StephaniaPlantfoodProjectile::StaticNew(void)

{
  StephaniaPlantfoodProjectile *this;
  
  this = ::operator_new(0x1a8);
  StephaniaPlantfoodProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StephaniaPlantfoodProjectile::StaticClassInit() */

void StephaniaPlantfoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"StephaniaPlantfoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_040f5684,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StephaniaPlantfoodProjectile::StaticGetClass() */

long * StephaniaPlantfoodProjectile::StaticGetClass(void)

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
  uVar2 = StephaniaProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"StephaniaPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StephaniaPlantfoodProjectile::GetClass() const */

long * StephaniaPlantfoodProjectile::GetClass(void)

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
  uVar2 = StephaniaProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"StephaniaPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StephaniaPlantfoodProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
StephaniaPlantfoodProjectile::OnCollideEntity
          (StephaniaPlantfoodProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  RealObject *this_00;
  RealObject *pRVar4;
  SexyVector3 *this_01;
  ZombieTosserSubSystem *pZVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) {
    nop();
    pRVar4 = (RealObject *)Projectile::GetInstigator((Projectile *)this);
    cVar2 = RealObject::IsOnOpposingTeam(this_00,pRVar4);
    if (((cVar2 != '\0') &&
        (((cVar2 = (**(code **)(*(long *)this_00 + 0x380))(this_00,0), cVar2 != '\0' &&
          (cVar2 = Zombie::IsControlled((Zombie *)this_00), cVar2 == '\0')) &&
         (bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00), !bVar1)))) &&
       ((cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0' &&
        (cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 == '\0')))) {
      bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00);
      if (!bVar1) {
        this_01 = (SexyVector3 *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)this_00);
        iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
        uVar6 = 0;
        uVar7 = 0;
        EATextSquish::Vec3::Vec3(aVStack_60,(float)iVar3,0.0,0.0);
        local_70 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aVStack_60);
        local_6c = uVar6;
        local_68 = uVar7;
        pZVar5 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
        ZombieTosserSubSystem::LaunchZombie
                  ((ZombieTosserSubSystem *)0x3f800000,0x3f000000,pZVar5,this_00,&local_70,
                   aRStack_50,0);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
      }
    }
  }
  StephaniaProjectile::OnCollideEntity((StephaniaProjectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

