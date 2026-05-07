// Class: PineconeSpecialProjectile


/* PineconeSpecialProjectile::onInitialized() */

void __thiscall PineconeSpecialProjectile::onInitialized(PineconeSpecialProjectile *this)

{
  this[0x1b4] = (PineconeSpecialProjectile)0x0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1a8) = 0x447a0000;
  return;
}


/* PineconeSpecialProjectile::handleExplosionDone(std::string const&) */

void PineconeSpecialProjectile::handleExplosionDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* PineconeSpecialProjectile::~PineconeSpecialProjectile() */

void __thiscall
PineconeSpecialProjectile::~PineconeSpecialProjectile(PineconeSpecialProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06824cb0;
  *(undefined ***)(this + 0x10) = &PTR__PineconeSpecialProjectile_06824ea0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PineconeSpecialProjectile::~PineconeSpecialProjectile() */

void __thiscall
PineconeSpecialProjectile::~PineconeSpecialProjectile(PineconeSpecialProjectile *this)

{
  ~PineconeSpecialProjectile(this + -0x10);
  return;
}


/* PineconeSpecialProjectile::~PineconeSpecialProjectile() */

void __thiscall
PineconeSpecialProjectile::~PineconeSpecialProjectile(PineconeSpecialProjectile *this)

{
  ~PineconeSpecialProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PineconeSpecialProjectile::~PineconeSpecialProjectile() */

void __thiscall
PineconeSpecialProjectile::~PineconeSpecialProjectile(PineconeSpecialProjectile *this)

{
  ~PineconeSpecialProjectile(this + -0x10);
  return;
}


/* PineconeSpecialProjectile::PineconeSpecialProjectile() */

void __thiscall
PineconeSpecialProjectile::PineconeSpecialProjectile(PineconeSpecialProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06824cb0;
  *(undefined ***)(this + 0x10) = &PTR__PineconeSpecialProjectile_06824ea0;
  return;
}


/* PineconeSpecialProjectile::StaticNew() */

PineconeSpecialProjectile * PineconeSpecialProjectile::StaticNew(void)

{
  PineconeSpecialProjectile *this;
  
  this = ::operator_new(0x1c0);
  PineconeSpecialProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PineconeSpecialProjectile::StaticClassInit() */

void PineconeSpecialProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PineconeSpecialProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04282894,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PineconeSpecialProjectile::StaticGetClass() */

long * PineconeSpecialProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PineconeSpecialProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PineconeSpecialProjectile::GetClass() const */

long * PineconeSpecialProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PineconeSpecialProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PineconeSpecialProjectile::SetExplosionParameters(float, float, float) */

void __thiscall
PineconeSpecialProjectile::SetExplosionParameters
          (PineconeSpecialProjectile *this,float param_1,float param_2,float param_3)

{
  *(float *)(this + 0x1a8) = param_1;
  *(float *)(this + 0x1ac) = param_2;
  *(int *)(this + 0x1b0) = (int)param_3;
  return;
}


/* PineconeSpecialProjectile::SetOwnerPlant(PlantPinecone*) */

void __thiscall
PineconeSpecialProjectile::SetOwnerPlant(PineconeSpecialProjectile *this,PlantPinecone *param_1)

{
  *(PlantPinecone **)(this + 0x1b8) = param_1;
  return;
}


/* PineconeSpecialProjectile::isShouldFlickOff(BoardEntity*) */

bool __thiscall
PineconeSpecialProjectile::isShouldFlickOff(PineconeSpecialProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  Zombie *this_00;
  
  if (((this[0x1b4] != (PineconeSpecialProjectile)0x0) && (param_1 != (BoardEntity *)0x0)) &&
     (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) {
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    cVar2 = (**(code **)(*(long *)this_00 + 0x3f0))();
    if (cVar2 != '\0') {
      iVar3 = Zombie::GetSizeType(this_00);
      return iVar3 == 0;
    }
  }
  return false;
}


/* PineconeSpecialProjectile::doExplosion(std::string const&) */

void PineconeSpecialProjectile::doExplosion(string *param_1)

{
  char *pcVar1;
  
  (**(code **)(*(long *)param_1 + 0x168))(param_1,0);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_General_Explo_01");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PineconeSpecialProjectile::isBoardEntityCanToss(BoardEntity*) */

void __thiscall
PineconeSpecialProjectile::isBoardEntityCanToss
          (PineconeSpecialProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  Zombie *this_00;
  TitleStatus aTStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x1b4] == (PineconeSpecialProjectile)0x0 && param_1 != (BoardEntity *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) {
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    cVar2 = (**(code **)(*(long *)this_00 + 0x328))();
    bVar1 = false;
    if (((cVar2 != '\0') ||
        (((cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 != '\0' ||
          (cVar2 = Zombie::IsControlled(this_00), cVar2 != '\0')) ||
         (cVar2 = Zombie::IsInvisible(this_00), cVar2 != '\0')))) ||
       ((((iVar4 = Zombie::GetSizeType(this_00), iVar4 == 2 ||
          (iVar4 = Zombie::GetSizeType(this_00), iVar4 == 1)) ||
         (cVar2 = Zombie::IsBoss(this_00), cVar2 != '\0')) ||
        ((cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 != '\0' ||
         (cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 != '\0'))))))
    goto LAB_0428464c;
    Zombie::GetCurrentTitleStatus();
    TitleStatus::~TitleStatus(aTStack_70);
    if (local_58 == '\0') {
      bVar3 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00);
      if (((((!bVar3) && (bVar3 = Sexy::RtObject::IsA<ZombieMech>((RtObject *)this_00), !bVar3)) &&
           (bVar3 = Sexy::RtObject::IsA<ZombieGargantuar>((RtObject *)this_00), !bVar3)) &&
          ((bVar3 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00), !bVar3 &&
           (cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0')))) &&
         ((((cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 == '\0' &&
            ((bVar3 = Sexy::RtObject::IsA<ZombieAgileBronze>((RtObject *)this_00), !bVar3 &&
             (bVar3 = Sexy::RtObject::IsA<ZombieStrongBronze>((RtObject *)this_00), !bVar3)))) &&
           (bVar3 = Sexy::RtObject::IsA<ZombieMagicBronze>((RtObject *)this_00), !bVar3)) &&
          ((((bVar3 = Sexy::RtObject::IsA<ZombieLionDance>((RtObject *)this_00), !bVar3 &&
             (bVar3 = Sexy::RtObject::IsA<ZombieWealthGod>((RtObject *)this_00), !bVar3)) &&
            (bVar3 = Sexy::RtObject::IsA<ZombieSkyCityTwinsPlane>((RtObject *)this_00), !bVar3)) &&
           ((bVar3 = Sexy::RtObject::IsA<ZombieInvisiblePlane>((RtObject *)this_00), !bVar3 &&
            (bVar3 = Sexy::RtObject::IsA<ZombiePirateCannon>((RtObject *)this_00), !bVar3)))))))) {
        bVar1 = Sexy::RtObject::IsA<ZombieModernSolarTruck>((RtObject *)this_00);
        bVar1 = !bVar1;
      }
      goto LAB_0428464c;
    }
  }
  bVar1 = false;
LAB_0428464c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PineconeSpecialProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
PineconeSpecialProjectile::OnCollideEntity(PineconeSpecialProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  Zombie *pZVar6;
  long lVar7;
  undefined8 *puVar8;
  ZombieTosserSubSystem *pZVar9;
  float fVar10;
  undefined8 local_60;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  cVar1 = isShouldFlickOff(this,param_1);
  if (cVar1 == '\0') {
    cVar1 = isBoardEntityCanToss(this,param_1);
    if (cVar1 == '\0') {
      lVar7 = *(long *)(this + 0x1b8);
    }
    else {
      pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
      puVar8 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)pZVar6);
      local_60 = *puVar8;
      local_58 = *(undefined4 *)(puVar8 + 1);
      iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)pZVar6);
      iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
      if (iVar5 <= iVar4) {
        iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
        iVar4 = iVar4 + -1;
      }
      iVar4 = BoardTransforms::GridToBoardSpaceX(iVar4 + 1);
      local_60 = CONCAT44(local_60._4_4_,(float)iVar4);
      pZVar9 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
      ZombieTosserSubSystem::LaunchZombie
                ((ZombieTosserSubSystem *)0x3dcccccd,0x3f000000,pZVar9,pZVar6,&local_60,aRStack_50,1
                );
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      lVar7 = *(long *)(this + 0x1b8);
    }
    if ((((lVar7 != 0) && (param_1 != (BoardEntity *)0x0)) &&
        (bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar2)) &&
       (pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar6 != (Zombie *)0x0)) {
      cVar1 = Zombie::HasHead(pZVar6);
      if (cVar1 == '\0') {
        Sexy::CurvedVal::SetMode(*(CurvedVal **)(this + 0x1b8),1);
      }
      else {
        Sexy::CurvedVal::SetMode(*(CurvedVal **)(this + 0x1b8),0);
      }
    }
  }
  else {
    pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    iVar4 = Zombie::GetFacing(pZVar6);
    if (iVar4 == 1) {
      iVar4 = Sexy::Rand(300);
      fVar10 = -500.0;
    }
    else {
      iVar4 = Sexy::Rand(300);
      fVar10 = 1000.0;
    }
    EATextSquish::Vec3::Vec3((Vec3 *)&local_60,fVar10,(float)iVar4,0.0);
    Zombie::FlickOff(pZVar6,(SexyVector3 *)&local_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

