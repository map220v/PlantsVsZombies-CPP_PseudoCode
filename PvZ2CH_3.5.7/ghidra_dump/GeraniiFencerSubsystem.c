// Class: GeraniiFencerSubsystem


/* GeraniiFencerSubsystem::shouldStun(Zombie*) */

undefined8 __thiscall
GeraniiFencerSubsystem::shouldStun(GeraniiFencerSubsystem *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((((param_1 == (Zombie *)0x0) || (cVar1 = Zombie::IsFriendZombie(param_1), cVar1 != '\0')) ||
       (cVar1 = Zombie::IsFlying(param_1), cVar1 != '\0')) ||
      ((((cVar1 = Zombie::IsFlickedOff(param_1), cVar1 != '\0' ||
         (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 != '\0')) ||
        ((cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 != '\0' ||
         ((cVar1 = Zombie::IsControlled(param_1), cVar1 != '\0' ||
          (cVar1 = Zombie::IsInvisible(param_1), cVar1 != '\0')))))) ||
       (iVar2 = Zombie::GetSizeType(param_1), iVar2 == 2)))) ||
     (((cVar1 = Zombie::IsBoss(param_1), cVar1 != '\0' ||
       (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 != '\0')) ||
      (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 != '\0')))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


/* GeraniiFencerSubsystem::~GeraniiFencerSubsystem() */

void __thiscall GeraniiFencerSubsystem::~GeraniiFencerSubsystem(GeraniiFencerSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_069a7ed0;
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* GeraniiFencerSubsystem::~GeraniiFencerSubsystem() */

void __thiscall GeraniiFencerSubsystem::~GeraniiFencerSubsystem(GeraniiFencerSubsystem *this)

{
  ~GeraniiFencerSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeraniiFencerSubsystem::StaticClassInit() */

void GeraniiFencerSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeraniiFencerSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_04d12e6c,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeraniiFencerSubsystem::StaticGetClass() */

long * GeraniiFencerSubsystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeraniiFencerSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeraniiFencerSubsystem::GetClass() const */

long * GeraniiFencerSubsystem::GetClass(void)

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
  (*pcVar3)(plVar1,"GeraniiFencerSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeraniiFencerSubsystem::onFlyingEnd(Zombie*) */

void __thiscall GeraniiFencerSubsystem::onFlyingEnd(GeraniiFencerSubsystem *this,Zombie *param_1)

{
  char cVar1;
  
  if ((param_1 != (Zombie *)0x0) && (cVar1 = shouldStun(this,param_1), cVar1 != '\0')) {
    Zombie::ApplyCondition((Zombie *)0x40000000,0,param_1,2,1);
    return;
  }
  return;
}


/* GeraniiFencerSubsystem::GeraniiFencerSubsystem() */

void __thiscall GeraniiFencerSubsystem::GeraniiFencerSubsystem(GeraniiFencerSubsystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_069a7ed0;
  return;
}


/* GeraniiFencerSubsystem::StaticNew() */

GeraniiFencerSubsystem * GeraniiFencerSubsystem::StaticNew(void)

{
  GeraniiFencerSubsystem *this;
  
  this = ::operator_new(0x10);
  GeraniiFencerSubsystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeraniiFencerSubsystem::StunZombies(int, int, float, bool, bool) */

void __thiscall
GeraniiFencerSubsystem::StunZombies
          (GeraniiFencerSubsystem *this,int param_1,int param_2,float param_3,bool param_4,
          bool param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  Zombie *this_00;
  ZombieTosserSubSystem *pZVar5;
  undefined8 local_e0;
  undefined8 local_d8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_d0 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b8 [72];
  undefined8 local_70;
  undefined4 local_68;
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_d0);
  EntityFinder::GetEntitiesAtGridSquare(avStack_d0,2,param_1,param_2);
  local_e0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_d0);
  local_d8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_d0);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_e0,(__normal_iterator *)&local_d8);
  if (bVar1) {
    do {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_e0)
      ;
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
      if (((this_00 == (Zombie *)0x0) ||
          (cVar2 = Zombie::CanBeLaunchedByPlants(this_00), cVar2 == '\0')) ||
         (cVar2 = RealObject::IsOnOpposingTeam(this_00,1), cVar2 == '\0')) {
LAB_04d1378c:
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_e0);
      }
      else {
        if (param_4) {
          cVar2 = shouldStun(this,this_00);
          if (cVar2 != '\0') {
            Zombie::ApplyCondition((Zombie *)0x40000000,0,this_00,2,1);
          }
          goto LAB_04d1378c;
        }
        if (param_5) {
          iVar3 = Zombie::GetSizeType(this_00);
          if (iVar3 < 2) {
LAB_04d137f8:
            Zombie::GetCurrentTitleStatus();
            cVar2 = local_58;
            TitleStatus::~TitleStatus((TitleStatus *)&local_70);
            if (cVar2 == '\0') {
              puVar4 = (undefined8 *)
                       std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      *)this_00);
              local_70 = *puVar4;
              local_68 = *(undefined4 *)(puVar4 + 1);
              iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
              local_70 = CONCAT44(local_70._4_4_,(float)local_70 + param_3 * (float)iVar3);
              pZVar5 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0))
              ;
              RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b8);
              ZombieTosserSubSystem::LaunchZombie
                        ((ZombieTosserSubSystem *)0x41a00000,0x3f000000,pZVar5,this_00,
                         (TitleStatus *)&local_70,aRStack_b8,1);
              RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              ::~RtReflectionDelegate
                        ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                          *)aRStack_b8);
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_e0);
              goto LAB_04d13794;
            }
          }
          goto LAB_04d1378c;
        }
        iVar3 = Zombie::GetSizeType(this_00);
        if (iVar3 < 1) goto LAB_04d137f8;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_e0);
      }
LAB_04d13794:
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_e0,(__normal_iterator *)&local_d8);
    } while (bVar1);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

