// Class: MulberryFlashGrenade


/* MulberryFlashGrenade::~MulberryFlashGrenade() */

void __thiscall MulberryFlashGrenade::~MulberryFlashGrenade(MulberryFlashGrenade *this)

{
  *(undefined ***)this = &PTR_GetClass_06746950;
  *(undefined ***)(this + 0x10) = &PTR__MulberryFlashGrenade_06746b40;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to MulberryFlashGrenade::~MulberryFlashGrenade() */

void __thiscall MulberryFlashGrenade::~MulberryFlashGrenade(MulberryFlashGrenade *this)

{
  ~MulberryFlashGrenade(this + -0x10);
  return;
}


/* MulberryFlashGrenade::~MulberryFlashGrenade() */

void __thiscall MulberryFlashGrenade::~MulberryFlashGrenade(MulberryFlashGrenade *this)

{
  ~MulberryFlashGrenade(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MulberryFlashGrenade::~MulberryFlashGrenade() */

void __thiscall MulberryFlashGrenade::~MulberryFlashGrenade(MulberryFlashGrenade *this)

{
  ~MulberryFlashGrenade(this + -0x10);
  return;
}


/* MulberryFlashGrenade::MulberryFlashGrenade() */

void __thiscall MulberryFlashGrenade::MulberryFlashGrenade(MulberryFlashGrenade *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06746950;
  *(undefined ***)(this + 0x10) = &PTR__MulberryFlashGrenade_06746b40;
  return;
}


/* MulberryFlashGrenade::StaticNew() */

MulberryFlashGrenade * MulberryFlashGrenade::StaticNew(void)

{
  MulberryFlashGrenade *this;
  
  this = ::operator_new(0x1a8);
  MulberryFlashGrenade(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MulberryFlashGrenade::StaticClassInit() */

void MulberryFlashGrenade::StaticClassInit(void)

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
    std::string::string(asStack_10,"MulberryFlashGrenade");
    (*pcVar2)(plVar1,asStack_10,FUN_03c0cd40,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MulberryFlashGrenade::StaticGetClass() */

long * MulberryFlashGrenade::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MulberryFlashGrenade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MulberryFlashGrenade::GetClass() const */

long * MulberryFlashGrenade::GetClass(void)

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
  (*pcVar3)(plVar1,"MulberryFlashGrenade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MulberryFlashGrenade::stunZombie(BoardEntity*) */

void __thiscall MulberryFlashGrenade::stunZombie(MulberryFlashGrenade *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long extraout_x0;
  undefined8 *puVar5;
  Zombie *pZVar6;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    Projectile::GetProps((Projectile *)this);
    nop();
    if (extraout_x0 != 0) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      iVar3 = BoardEntity::CalcColumnPosition(param_1);
      iVar4 = SharkMinion::getRow((SharkMinion *)param_1);
      Sexy::Insets::Insets(aIStack_30,iVar3 + -1,iVar4 + -1,3,3);
      EntityFinder::GetEntitiesInGridSquares(avStack_20,2,aIStack_30);
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
            bVar2) {
        puVar5 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
        pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
        if ((pZVar6 != (Zombie *)0x0) &&
           (cVar1 = GeraniiFencerSubsystem::shouldStun((GeraniiFencerSubsystem *)this,pZVar6),
           cVar1 != '\0')) {
                    /* WARNING: Load size is inaccurate */
          Zombie::ApplyCondition(*(Zombie **)(extraout_x0 + 0x1e0),0,pZVar6,2,1);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MulberryFlashGrenade::handleImpact(BoardEntity*) */

void __thiscall MulberryFlashGrenade::handleImpact(MulberryFlashGrenade *this,BoardEntity *param_1)

{
  stunZombie(this,param_1);
  Projectile::handleImpact((Projectile *)this,param_1);
  return;
}

