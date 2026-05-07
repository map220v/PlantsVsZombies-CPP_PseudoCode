// Class: ProjectileGuitarMusicalNote


/* ProjectileGuitarMusicalNote::~ProjectileGuitarMusicalNote() */

void __thiscall
ProjectileGuitarMusicalNote::~ProjectileGuitarMusicalNote(ProjectileGuitarMusicalNote *this)

{
  *(undefined ***)this = &PTR_GetClass_0669b540;
  *(undefined ***)(this + 0x10) = &PTR__ProjectileGuitarMusicalNote_0669b730;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ProjectileGuitarMusicalNote::~ProjectileGuitarMusicalNote() */

void __thiscall
ProjectileGuitarMusicalNote::~ProjectileGuitarMusicalNote(ProjectileGuitarMusicalNote *this)

{
  ~ProjectileGuitarMusicalNote(this + -0x10);
  return;
}


/* ProjectileGuitarMusicalNote::~ProjectileGuitarMusicalNote() */

void __thiscall
ProjectileGuitarMusicalNote::~ProjectileGuitarMusicalNote(ProjectileGuitarMusicalNote *this)

{
  ~ProjectileGuitarMusicalNote(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ProjectileGuitarMusicalNote::~ProjectileGuitarMusicalNote() */

void __thiscall
ProjectileGuitarMusicalNote::~ProjectileGuitarMusicalNote(ProjectileGuitarMusicalNote *this)

{
  ~ProjectileGuitarMusicalNote(this + -0x10);
  return;
}


/* ProjectileGuitarMusicalNote::ProjectileGuitarMusicalNote() */

void __thiscall
ProjectileGuitarMusicalNote::ProjectileGuitarMusicalNote(ProjectileGuitarMusicalNote *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0669b540;
  *(undefined ***)(this + 0x10) = &PTR__ProjectileGuitarMusicalNote_0669b730;
  return;
}


/* ProjectileGuitarMusicalNote::StaticNew() */

ProjectileGuitarMusicalNote * ProjectileGuitarMusicalNote::StaticNew(void)

{
  ProjectileGuitarMusicalNote *this;
  
  this = ::operator_new(0x1a8);
  ProjectileGuitarMusicalNote(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectileGuitarMusicalNote::StaticClassInit() */

void ProjectileGuitarMusicalNote::StaticClassInit(void)

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
    std::string::string(asStack_10,"ProjectileGuitarMusicalNote");
    (*pcVar2)(plVar1,asStack_10,FUN_037e1e50,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProjectileGuitarMusicalNote::StaticGetClass() */

long * ProjectileGuitarMusicalNote::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ProjectileGuitarMusicalNote",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ProjectileGuitarMusicalNote::GetClass() const */

long * ProjectileGuitarMusicalNote::GetClass(void)

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
  (*pcVar3)(plVar1,"ProjectileGuitarMusicalNote",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ProjectileGuitarMusicalNote::handleImpact(BoardEntity*) */

undefined1 __thiscall
ProjectileGuitarMusicalNote::handleImpact(ProjectileGuitarMusicalNote *this,BoardEntity *param_1)

{
  bool bVar1;
  
  Projectile::handleImpact((Projectile *)this,param_1);
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (bVar1) {
      (**(code **)(*(long *)this + 0x48))(this);
      return 1;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectileGuitarMusicalNote::damageEntity(BoardEntity*) */

void __thiscall
ProjectileGuitarMusicalNote::damageEntity(ProjectileGuitarMusicalNote *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  PlantGroup *pPVar5;
  undefined8 *puVar6;
  RtWeakPtrBase *pRVar7;
  long lVar8;
  Plant *pPVar9;
  Zombie *this_00;
  ZombieTosserSubSystem *pZVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_c8 [8];
  undefined8 local_c0;
  undefined4 local_b8;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b0 [72];
  undefined8 local_68 [3];
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (bVar1) {
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
      cVar2 = RealObject::IsOnOpposingTeam(this_00,1);
      if (cVar2 != '\0') {
        DamageInfo::DamageInfo((DamageInfo *)local_68);
        (**(code **)(*(long *)this + 0x178))(this,(DamageInfo *)local_68,param_1);
        iVar3 = BoardEntity::CalcColumnPosition(param_1);
        iVar4 = FUN_037e1350(*(undefined4 *)(this + 0xa8));
        Sexy::Point::Point((Point *)&local_c0,iVar3,iVar4);
        local_50 = local_c0;
        (**(code **)(*(long *)param_1 + 0x110))(param_1,(DamageInfo *)local_68);
        cVar2 = Zombie::CanBeLaunchedByPlants(this_00);
        if (cVar2 != '\0') {
          puVar6 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)this_00);
          local_c0 = *puVar6;
          local_b8 = *(undefined4 *)(puVar6 + 1);
          iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
          local_c0 = CONCAT44(local_c0._4_4_,(float)local_c0 + (float)iVar3 * 0.5);
          pZVar10 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b0);
          ZombieTosserSubSystem::LaunchZombie
                    ((ZombieTosserSubSystem *)0x43480000,0x3f800000,pZVar10,this_00,
                     (Point *)&local_c0,aRStack_b0,1);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_b0);
        }
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
      }
    }
    else {
      pPVar5 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)param_1);
      if (pPVar5 != (PlantGroup *)0x0) {
        puVar6 = (undefined8 *)PlantGroup::Plants();
        local_c0 = FUN_037e2e7c(*puVar6);
        local_68[0] = FUN_037e2ecc(puVar6[1]);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_c0,(__normal_iterator *)local_68),
              bVar1) {
          pRVar7 = (RtWeakPtrBase *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_c8,pRVar7);
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c8);
          cVar2 = FUN_037e1354(*(undefined1 *)(lVar8 + 0x278));
          if (cVar2 != '\0') {
            pPVar9 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c8);
            Plant::SetIsSleepping(pPVar9,false,-1.0);
          }
          pPVar9 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c8);
          Plant::SetAttackUpValue(pPVar9,true,10.0,0.5);
          pPVar9 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c8);
          Plant::ChangeSpeedModifier(pPVar9,1.5,10.0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c8);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c0);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

