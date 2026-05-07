// Class: WaxgourdSubsystem


/* WaxgourdSubsystem::~WaxgourdSubsystem() */

void __thiscall WaxgourdSubsystem::~WaxgourdSubsystem(WaxgourdSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_0681a670;
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* WaxgourdSubsystem::~WaxgourdSubsystem() */

void __thiscall WaxgourdSubsystem::~WaxgourdSubsystem(WaxgourdSubsystem *this)

{
  ~WaxgourdSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaxgourdSubsystem::StaticClassInit() */

void WaxgourdSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"WaxgourdSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_04257044,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaxgourdSubsystem::StaticGetClass() */

long * WaxgourdSubsystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WaxgourdSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaxgourdSubsystem::GetClass() const */

long * WaxgourdSubsystem::GetClass(void)

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
  (*pcVar3)(plVar1,"WaxgourdSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaxgourdSubsystem::WaxgourdSubsystem() */

void __thiscall WaxgourdSubsystem::WaxgourdSubsystem(WaxgourdSubsystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_0681a670;
  return;
}


/* WaxgourdSubsystem::StaticNew() */

WaxgourdSubsystem * WaxgourdSubsystem::StaticNew(void)

{
  WaxgourdSubsystem *this;
  
  this = ::operator_new(0x10);
  WaxgourdSubsystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaxgourdSubsystem::StunZombies(Sexy::TRect<int> const&, float, bool) */

void __thiscall
WaxgourdSubsystem::StunZombies(WaxgourdSubsystem *this,TRect *param_1,float param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  Zombie *this_00;
  ZombieTosserSubSystem *pZVar6;
  DamageInfo *pDVar7;
  SexyVector3 *pSVar8;
  ZombieTosserSubSystem *pZVar9;
  undefined8 local_d8;
  undefined8 local_d0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c8 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b0 [72];
  float local_68 [2];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c8);
  EntityFinder::GetEntitiesInGridSquares(avStack_c8,2,param_1);
  local_d8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_c8);
  local_d0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_c8);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_d8,(__normal_iterator *)&local_d0);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_c8);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d8);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
    if (((this_00 != (Zombie *)0x0) &&
        (cVar2 = Zombie::CanBeLaunchedByPlants(this_00), cVar2 != '\0')) &&
       (cVar2 = RealObject::IsOnTeam(this_00,2), cVar2 != '\0')) {
      cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
      if (((cVar2 == '\0') &&
          (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')) &&
         ((cVar2 = Zombie::IsInvisible(this_00), cVar2 == '\0' &&
          (bVar3 = Zombie::IsFlying(this_00), bVar3 < (1.0 < param_2))))) {
        DamageInfo::DamageInfo((DamageInfo *)local_68);
        local_60 = param_2;
        (**(code **)(*(long *)this_00 + 0x110))(this_00,(DamageInfo *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
        if (!param_3) goto LAB_0425859c;
LAB_04258660:
        iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
        if (iVar4 <= *(int *)param_1) goto LAB_0425859c;
        DVec3::DVec3((DVec3 *)local_68);
        pSVar8 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this_00);
        Sexy::SexyVector3::operator=((SexyVector3 *)local_68,pSVar8);
        local_68[0] = local_68[0] + 100.0;
        pZVar6 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b0);
        pDVar7 = (DamageInfo *)local_68;
        pZVar9._0_4_ = (ZombieTosserSubSystem *)0x428c0000;
      }
      else {
        if (param_3) goto LAB_04258660;
LAB_0425859c:
        pZVar6 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        pDVar7 = (DamageInfo *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this_00);
        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b0);
        pZVar9._0_4_ = (ZombieTosserSubSystem *)0x43480000;
      }
      ZombieTosserSubSystem::LaunchZombie
                (pZVar9._0_4_,0x3f800000,pZVar6,this_00,pDVar7,aRStack_b0,0);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_b0);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_d8);
  } while( true );
}

