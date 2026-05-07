// Class: BurdockBatterCriticalHit


/* BurdockBatterCriticalHit::~BurdockBatterCriticalHit() */

void __thiscall BurdockBatterCriticalHit::~BurdockBatterCriticalHit(BurdockBatterCriticalHit *this)

{
  *(undefined ***)this = &PTR_GetClass_0666e130;
  *(undefined ***)(this + 0x10) = &PTR__BurdockBatterCriticalHit_0666e320;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BurdockBatterCriticalHit::~BurdockBatterCriticalHit() */

void __thiscall BurdockBatterCriticalHit::~BurdockBatterCriticalHit(BurdockBatterCriticalHit *this)

{
  ~BurdockBatterCriticalHit(this + -0x10);
  return;
}


/* BurdockBatterCriticalHit::~BurdockBatterCriticalHit() */

void __thiscall BurdockBatterCriticalHit::~BurdockBatterCriticalHit(BurdockBatterCriticalHit *this)

{
  ~BurdockBatterCriticalHit(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BurdockBatterCriticalHit::~BurdockBatterCriticalHit() */

void __thiscall BurdockBatterCriticalHit::~BurdockBatterCriticalHit(BurdockBatterCriticalHit *this)

{
  ~BurdockBatterCriticalHit(this + -0x10);
  return;
}


/* BurdockBatterCriticalHit::BurdockBatterCriticalHit() */

void __thiscall BurdockBatterCriticalHit::BurdockBatterCriticalHit(BurdockBatterCriticalHit *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0666e130;
  *(undefined ***)(this + 0x10) = &PTR__BurdockBatterCriticalHit_0666e320;
  return;
}


/* BurdockBatterCriticalHit::StaticNew() */

BurdockBatterCriticalHit * BurdockBatterCriticalHit::StaticNew(void)

{
  BurdockBatterCriticalHit *this;
  
  this = ::operator_new(0x1a8);
  BurdockBatterCriticalHit(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BurdockBatterCriticalHit::StaticClassInit() */

void BurdockBatterCriticalHit::StaticClassInit(void)

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
    std::string::string(asStack_10,"BurdockBatterCriticalHit");
    (*pcVar2)(plVar1,asStack_10,FUN_03636c14,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BurdockBatterCriticalHit::StaticGetClass() */

long * BurdockBatterCriticalHit::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BurdockBatterCriticalHit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BurdockBatterCriticalHit::GetClass() const */

long * BurdockBatterCriticalHit::GetClass(void)

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
  (*pcVar3)(plVar1,"BurdockBatterCriticalHit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BurdockBatterCriticalHit::OnCollideEntity(BoardEntity*) */

void __thiscall
BurdockBatterCriticalHit::OnCollideEntity(BurdockBatterCriticalHit *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  Zombie *this_00;
  TitleStatus aTStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
    cVar1 = '\0';
  }
  else {
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if ((this_00 != (Zombie *)0x0) &&
       (((iVar2 = Zombie::GetSizeType(this_00), iVar2 == 0 ||
         (iVar2 = Zombie::GetSizeType(this_00), iVar2 == 1)) &&
        (cVar1 = RealObject::IsOnOpposingTeam(this_00,1), cVar1 != '\0')))) {
      Zombie::GetCurrentTitleStatus();
      TitleStatus::~TitleStatus(aTStack_70);
      if (local_58 == '\0') {
        iVar2 = Sexy::Rand(600);
        EATextSquish::Vec3::Vec3((Vec3 *)aTStack_70,1000.0,(float)iVar2,0.0);
        Zombie::FlickOff(this_00,(SexyVector3 *)aTStack_70);
        goto LAB_036398d8;
      }
    }
    cVar1 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
LAB_036398d8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}

