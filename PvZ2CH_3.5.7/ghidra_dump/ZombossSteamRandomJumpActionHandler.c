// Class: ZombossSteamRandomJumpActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRandomJumpActionHandler::StaticClassInit() */

void ZombossSteamRandomJumpActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSteamRandomJumpActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_03c40e98,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSteamRandomJumpActionHandler::StaticGetClass() */

long * ZombossSteamRandomJumpActionHandler::StaticGetClass(void)

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
  uVar2 = ZombossJumpActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamRandomJumpActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamRandomJumpActionHandler::GetClass() const */

long * ZombossSteamRandomJumpActionHandler::GetClass(void)

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
  uVar2 = ZombossJumpActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamRandomJumpActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamRandomJumpActionHandler::ZombossSteamRandomJumpActionHandler() */

void __thiscall
ZombossSteamRandomJumpActionHandler::ZombossSteamRandomJumpActionHandler
          (ZombossSteamRandomJumpActionHandler *this)

{
  ZombossJumpActionHandler::ZombossJumpActionHandler((ZombossJumpActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06752280;
  return;
}


/* ZombossSteamRandomJumpActionHandler::StaticNew() */

ZombossSteamRandomJumpActionHandler * ZombossSteamRandomJumpActionHandler::StaticNew(void)

{
  ZombossSteamRandomJumpActionHandler *this;
  
  this = ::operator_new(0x68);
  ZombossSteamRandomJumpActionHandler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRandomJumpActionHandler::spawnCoals(int, int) */

void __thiscall
ZombossSteamRandomJumpActionHandler::spawnCoals
          (ZombossSteamRandomJumpActionHandler *this,int param_1,int param_2)

{
  int iVar1;
  GridItemCoalSteam *this_00;
  RtObject *this_01;
  GridItemCoalSteamZomboss *this_02;
  Board *this_03;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((-1 < param_1) && (iVar1 = BoardConstants::NUMBER_OF_COLUMNS(), param_1 < iVar1)) &&
      (-1 < param_2)) && (iVar1 = BoardConstants::NUMBER_OF_ROWS(), param_2 < iVar1)) {
    this_00 = (GridItemCoalSteam *)FUN_03c48e90(param_1,param_2);
    if (this_00 == (GridItemCoalSteam *)0x0) {
      this_03 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"coal_steam_zomboss");
      this_01 = (RtObject *)Board::AddGridItem(this_03,asStack_10,param_1,param_2,1);
      this_02 = Sexy::RtObject::Cast<GridItemCoalSteamZomboss>(this_01);
      std::string::~string(asStack_10);
      nop();
      FUN_03c3ef3c(this_02 + 0x24);
      GridItemCoalSteam::SetIdle((GridItemCoalSteam *)this_02);
    }
    else {
      GridItemCoalSteam::ResetTimer(this_00);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRandomJumpActionHandler::onLanding() */

void __thiscall
ZombossSteamRandomJumpActionHandler::onLanding(ZombossSteamRandomJumpActionHandler *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  long extraout_x0;
  int *piVar4;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  (**(code **)(*(long *)this_01 + 0xd0))(&local_48);
  iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this_01);
  iVar3 = SharkMinion::getRow((SharkMinion *)this_01);
  Sexy::Point::Point((Point *)&local_40,iVar2 + local_48 + -1,iVar3 - local_44);
  Sexy::Point::Point((Point *)&local_38,iVar2 + local_48 + -1,iVar3 + 1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
  nop();
  iVar2 = *(int *)(extraout_x0 + 0x58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
  if (iVar2 < 2) {
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,(Point *)&local_40);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,(Point *)&local_38);
  }
  else {
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,(Point *)&local_40);
    Sexy::Point::Point((Point *)&local_28,local_40 + -1,local_3c);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,(Point *)&local_28);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,(Point *)&local_38);
    Sexy::Point::Point((Point *)&local_28,local_38 + -1,local_34);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,(Point *)&local_28);
  }
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    spawnCoals(this,*piVar4,piVar4[1]);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSteamRandomJumpActionHandler::~ZombossSteamRandomJumpActionHandler() */

void __thiscall
ZombossSteamRandomJumpActionHandler::~ZombossSteamRandomJumpActionHandler
          (ZombossSteamRandomJumpActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06752280;
  ZombossJumpActionHandler::~ZombossJumpActionHandler((ZombossJumpActionHandler *)this);
  return;
}


/* ZombossSteamRandomJumpActionHandler::~ZombossSteamRandomJumpActionHandler() */

void __thiscall
ZombossSteamRandomJumpActionHandler::~ZombossSteamRandomJumpActionHandler
          (ZombossSteamRandomJumpActionHandler *this)

{
  ~ZombossSteamRandomJumpActionHandler(this);
  AK::FreeHook(this);
  return;
}

