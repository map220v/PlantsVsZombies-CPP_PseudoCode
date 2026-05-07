// Class: MagicbeansshotProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicbeansshotProjectileProps::StaticClassInit() */

void MagicbeansshotProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"MagicbeansshotProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0405ac00,0x200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MagicbeansshotProjectileProps::StaticGetClass() */

long * MagicbeansshotProjectileProps::StaticGetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"MagicbeansshotProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagicbeansshotProjectileProps::GetClass() const */

long * MagicbeansshotProjectileProps::GetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"MagicbeansshotProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagicbeansshotProjectileProps::~MagicbeansshotProjectileProps() */

void __thiscall
MagicbeansshotProjectileProps::~MagicbeansshotProjectileProps(MagicbeansshotProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067c2c30;
  std::string::~string((string *)(this + 0x1f8));
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* MagicbeansshotProjectileProps::~MagicbeansshotProjectileProps() */

void __thiscall
MagicbeansshotProjectileProps::~MagicbeansshotProjectileProps(MagicbeansshotProjectileProps *this)

{
  ~MagicbeansshotProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* MagicbeansshotProjectileProps::MagicbeansshotProjectileProps() */

void __thiscall
MagicbeansshotProjectileProps::MagicbeansshotProjectileProps(MagicbeansshotProjectileProps *this)

{
  undefined4 uVar1;
  
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067c2c30;
  Set8BytesTo0((string *)(this + 0x1f8));
  uVar1 = Sexy::SexyMath::DegToRad(45.0);
  *(undefined4 *)(this + 0x1e8) = 5;
  *(undefined4 *)(this + 0x1ec) = 6;
  *(undefined4 *)(this + 0x1e0) = uVar1;
  *(undefined4 *)(this + 0x1f0) = 7;
  *(undefined4 *)(this + 0x1e4) = 0x3f000000;
  std::string::append((string *)(this + 0x1f8),"POPANIM_EFFECTS_GRAPESHOT_HIT",7);
  return;
}


/* MagicbeansshotProjectileProps::StaticNew() */

MagicbeansshotProjectileProps * MagicbeansshotProjectileProps::StaticNew(void)

{
  MagicbeansshotProjectileProps *this;
  
  this = ::operator_new(0x200);
  MagicbeansshotProjectileProps(this);
  return this;
}

