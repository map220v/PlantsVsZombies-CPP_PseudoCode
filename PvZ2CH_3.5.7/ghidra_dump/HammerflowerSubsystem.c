// Class: HammerflowerSubsystem


/* HammerflowerSubsystem::~HammerflowerSubsystem() */

void __thiscall HammerflowerSubsystem::~HammerflowerSubsystem(HammerflowerSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067b3ab0;
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* HammerflowerSubsystem::~HammerflowerSubsystem() */

void __thiscall HammerflowerSubsystem::~HammerflowerSubsystem(HammerflowerSubsystem *this)

{
  ~HammerflowerSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HammerflowerSubsystem::StaticClassInit() */

void HammerflowerSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"HammerflowerSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_040006e8,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HammerflowerSubsystem::StaticGetClass() */

long * HammerflowerSubsystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"HammerflowerSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HammerflowerSubsystem::GetClass() const */

long * HammerflowerSubsystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"HammerflowerSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HammerflowerSubsystem::onFlyingEnd(Zombie*) */

void __thiscall HammerflowerSubsystem::onFlyingEnd(HammerflowerSubsystem *this,Zombie *param_1)

{
  char cVar1;
  
  if ((param_1 != (Zombie *)0x0) &&
     (cVar1 = GeraniiFencerSubsystem::shouldStun((GeraniiFencerSubsystem *)this,param_1),
     cVar1 != '\0')) {
    Zombie::ApplyCondition((Zombie *)0x41200000,0,param_1,2,1);
    return;
  }
  return;
}


/* HammerflowerSubsystem::HammerflowerSubsystem() */

void __thiscall HammerflowerSubsystem::HammerflowerSubsystem(HammerflowerSubsystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_067b3ab0;
  return;
}


/* HammerflowerSubsystem::StaticNew() */

HammerflowerSubsystem * HammerflowerSubsystem::StaticNew(void)

{
  HammerflowerSubsystem *this;
  
  this = ::operator_new(0x10);
  HammerflowerSubsystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HammerflowerSubsystem::StunZombies(int, int, Plant*) */

void __thiscall
HammerflowerSubsystem::StunZombies
          (HammerflowerSubsystem *this,int param_1,int param_2,Plant *param_3)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *this_00;
  ZombieTosserSubSystem *pZVar4;
  undefined8 uVar5;
  undefined8 local_e8;
  undefined8 local_e0;
  RtMixedPtr aRStack_d8 [8];
  RtId aRStack_d0 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c8 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_b0 [72];
  Plant *local_68;
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c8);
  EntityFinder::GetEntitiesAtGridSquare(avStack_c8,2,param_1,param_2);
  local_e8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_c8);
  local_e0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_c8);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_e8,(__normal_iterator *)&local_e0);
  if (bVar1) {
    do {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_e8)
      ;
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
      if ((this_00 != (Zombie *)0x0) &&
         (cVar2 = Zombie::CanBeLaunchedByPlants(this_00), cVar2 != '\0')) {
        cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
        if ((cVar2 == '\0') &&
           ((cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0' &&
            (cVar2 = Zombie::IsInvisible(this_00), cVar2 == '\0')))) {
          cVar2 = Zombie::IsFlying(this_00);
          if (cVar2 == '\0') {
            DamageInfo::DamageInfo((DamageInfo *)&local_68);
            local_60 = 0x42c80000;
            local_68 = param_3;
            (**(code **)(*(long *)this_00 + 0x110))(this_00,(DamageInfo *)&local_68);
            DamageInfo::~DamageInfo((DamageInfo *)&local_68);
          }
        }
        pZVar4 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        uVar5 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this_00);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_d8);
        std::string::string((string *)&local_68,"onFlyingEnd");
        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_b0,aRStack_d0,
                   (string *)&local_68);
        ZombieTosserSubSystem::LaunchZombie
                  ((ZombieTosserSubSystem *)0x43960000,0x3f800000,pZVar4,this_00,uVar5,aRStack_b0,0)
        ;
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_b0);
        std::string::~string((string *)&local_68);
        nop();
        Sexy::RtId::~RtId(aRStack_d0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8)
        ;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_e8);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_e8,(__normal_iterator *)&local_e0);
    } while (bVar1);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_c8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

