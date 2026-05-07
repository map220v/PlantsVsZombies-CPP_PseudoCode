// Class: ZombieIceAgeChiefElite


/* ZombieIceAgeChiefElite::onPlaceOnBoard() */

void __thiscall ZombieIceAgeChiefElite::onPlaceOnBoard(ZombieIceAgeChiefElite *this)

{
  Zombie::onPlaceOnBoard((Zombie *)this);
  Zombie::setZombieState((Zombie *)this,0x1a,0);
  return;
}


/* ZombieIceAgeChiefElite::~ZombieIceAgeChiefElite() */

void __thiscall ZombieIceAgeChiefElite::~ZombieIceAgeChiefElite(ZombieIceAgeChiefElite *this)

{
  *(undefined ***)this = &PTR_GetClass_068d50d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieIceAgeChiefElite_068d5b08;
  ZombieIceAgeChief::~ZombieIceAgeChief((ZombieIceAgeChief *)this);
  return;
}


/* non-virtual thunk to ZombieIceAgeChiefElite::~ZombieIceAgeChiefElite() */

void __thiscall ZombieIceAgeChiefElite::~ZombieIceAgeChiefElite(ZombieIceAgeChiefElite *this)

{
  ~ZombieIceAgeChiefElite(this + -0x10);
  return;
}


/* ZombieIceAgeChiefElite::~ZombieIceAgeChiefElite() */

void __thiscall ZombieIceAgeChiefElite::~ZombieIceAgeChiefElite(ZombieIceAgeChiefElite *this)

{
  ~ZombieIceAgeChiefElite(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieIceAgeChiefElite::~ZombieIceAgeChiefElite() */

void __thiscall ZombieIceAgeChiefElite::~ZombieIceAgeChiefElite(ZombieIceAgeChiefElite *this)

{
  ~ZombieIceAgeChiefElite(this + -0x10);
  return;
}


/* ZombieIceAgeChiefElite::ZombieIceAgeChiefElite() */

void __thiscall ZombieIceAgeChiefElite::ZombieIceAgeChiefElite(ZombieIceAgeChiefElite *this)

{
  ZombieIceAgeChief::ZombieIceAgeChief((ZombieIceAgeChief *)this);
  *(undefined ***)this = &PTR_GetClass_068d50d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieIceAgeChiefElite_068d5b08;
  return;
}


/* ZombieIceAgeChiefElite::StaticNew() */

ZombieIceAgeChiefElite * ZombieIceAgeChiefElite::StaticNew(void)

{
  ZombieIceAgeChiefElite *this;
  
  this = ::operator_new(0x808);
  ZombieIceAgeChiefElite(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeChiefElite::StaticClassInit() */

void ZombieIceAgeChiefElite::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieIceAgeChiefElite");
    (*pcVar2)(plVar1,asStack_10,FUN_04772a10,0x808,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeChiefElite::updateState_Eat() */

void __thiscall ZombieIceAgeChiefElite::updateState_Eat(ZombieIceAgeChiefElite *this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = (float)PVZ_T();
  if (((*(float *)(this + 0x800) < fVar3) &&
      (iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this), -1 < iVar1)) &&
     (iVar2 = BoardConstants::NUMBER_OF_COLUMNS(), iVar1 < iVar2)) {
    Zombie::setZombieState((Zombie *)this,0x1f,0);
    return;
  }
  Zombie::updateState_Eat((Zombie *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeChiefElite::MoveZombie(BoardEntity*, float, float) */

void __thiscall
ZombieIceAgeChiefElite::MoveZombie
          (ZombieIceAgeChiefElite *this,BoardEntity *param_1,float param_2,float param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar5;
  ZombieTosserSubSystem *pZVar6;
  float fVar7;
  float fVar8;
  float local_60;
  float local_5c;
  float local_58;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar8 = param_3;
  nop();
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_00);
  fVar7 = pfVar5[2];
  local_60 = (float)ZombieTosserSubSystem::CaculateTargetButNotOffScreen((Zombie *)this_00,param_2);
  local_5c = fVar8;
  local_58 = fVar7;
  iVar2 = BoardTransforms::GridToBoardSpaceX(0);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar3 = BoardTransforms::GridToBoardSpaceX(iVar3 + -1);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  if (param_2 < 0.0) {
    if (local_60 < (float)iVar2) {
      local_60 = (float)iVar2;
    }
    bVar1 = local_60 < *pfVar5;
  }
  else {
    fVar7 = (float)(iVar3 + iVar4 / 2);
    if (fVar7 < local_60) {
      local_60 = fVar7;
    }
    bVar1 = *pfVar5 < local_60;
  }
  if (bVar1) {
    pZVar6 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
    ZombieTosserSubSystem::LaunchZombie
              ((ZombieTosserSubSystem *)0x3f800000,param_3,pZVar6,this_00,&local_60,aRStack_50,0);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeChiefElite::SpwanWind(Sexy::Point const&) */

void __thiscall ZombieIceAgeChiefElite::SpwanWind(ZombieIceAgeChiefElite *this,Point *param_1)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  Plant *this_00;
  int *piVar8;
  Zombie *this_01;
  undefined8 uVar9;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  Insets aIStack_48 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<PlantTag,std::allocator<PlantTag>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieIceAgeChief::PlayWindEffect((ZombieIceAgeChief *)this,param_1);
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::ZombieIceAgeChiefSpwanWind,
             *(int *)(param_1 + 4));
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar9 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
    lVar6 = FUN_047708a0(uVar9);
    if ((lVar6 != 0) && (lVar6 = FUN_0477198c(uVar9), lVar6 == 0)) {
      Sexy::Insets::Insets(aIStack_48,0,*(int *)(param_1 + 4),*(int *)param_1,1);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
      EntityFinder::GetEntitiesInGridSquares(avStack_38,1,aIStack_48);
      local_68 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_38);
      local_60 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_38);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60),
            bVar1) {
        bVar1 = false;
        puVar7 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
        this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar7);
        Plant::GetType();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_50)
        ;
        std::vector<PlantTag,std::allocator<PlantTag>>::vector(avStack_20,(vector *)(lVar6 + 0xf0));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
        local_58 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_20);
        local_50 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50),
              bVar2) {
          piVar8 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
          if ((*piVar8 == 0x11) || (*piVar8 == 0xe)) {
            bVar1 = true;
          }
          eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                    ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_58);
        }
        if (bVar1 < (this_00 != (Plant *)0x0)) {
          Plant::AddFrost(this_00,0x15e);
        }
        std::vector<PlantTag,std::allocator<PlantTag>>::~vector(avStack_20);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
      }
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)avStack_20);
      EntityFinder::GetEntitiesInGridSquares(avStack_20,2,aIStack_48);
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50),
            bVar1) {
        puVar7 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
        bVar3 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)this_01);
        if ((((((bVar3 < (this != (ZombieIceAgeChiefElite *)this_01)) &&
               (cVar4 = Zombie::IsBoss(this_01), cVar4 == '\0')) &&
              (cVar4 = (**(code **)(*(long *)this_01 + 0x4d8))(this_01), cVar4 == '\0')) &&
             ((cVar4 = (**(code **)(*(long *)this_01 + 0x508))(this_01), cVar4 == '\0' &&
              (cVar4 = (**(code **)(*(long *)this_01 + 0x328))(this_01), cVar4 == '\0')))) &&
            ((cVar4 = Zombie::HasCondition(this_01,0x65), cVar4 == '\0' &&
             ((cVar4 = Zombie::HasCondition(this_01,0x27), cVar4 == '\0' &&
              (cVar4 = Zombie::HasCondition(this_01,0x25), cVar4 == '\0')))))) &&
           (cVar4 = Zombie::IsInvisible(this_01), cVar4 == '\0')) {
          iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
          MoveZombie(this,(BoardEntity *)this_01,(float)(iVar5 * -2),1.0);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeChiefElite::StaticGetClass() */

long * ZombieIceAgeChiefElite::StaticGetClass(void)

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
  uVar2 = ZombieIceAgeChief::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIceAgeChiefElite",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeChiefElite::GetClass() const */

long * ZombieIceAgeChiefElite::GetClass(void)

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
  uVar2 = ZombieIceAgeChief::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIceAgeChiefElite",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeChiefElite::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieIceAgeChiefElite::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  float fVar6;
  int local_18;
  int local_14;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator==(param_3,"freezing");
  if ((bVar2) && (bVar2 = std::operator==(param_4,"use_action"), bVar2)) {
    fVar6 = (float)PVZ_T();
    if (*(float *)(param_1 + 0x800) < fVar6) {
      BoardEntity::CalcGridPosition();
      local_10[0] = BoardConstants::NUMBER_OF_COLUMNS();
      piVar4 = eastl::min_alt<int>(&local_18,(int *)local_10);
      local_18 = *piVar4;
      (**(code **)(*(long *)param_1 + 0xa20))(param_1,&local_18);
      if (0 < local_14) {
        pcVar5 = *(code **)(*(long *)param_1 + 0xa20);
        Sexy::Point::Point((Point *)local_10,local_18,local_14 + -1);
        (*pcVar5)(param_1,(Point *)local_10);
      }
      iVar1 = local_14 + 1;
      iVar3 = BoardConstants::NUMBER_OF_ROWS();
      if (iVar1 < iVar3) {
        pcVar5 = *(code **)(*(long *)param_1 + 0xa20);
        Sexy::Point::Point((Point *)local_10,local_18,local_14 + 1);
        (*pcVar5)(param_1,(Point *)local_10);
      }
    }
  }
  else {
    ZombieIceAgeChief::onPopAnimCommand(param_1,param_2,param_3,param_4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

