// Class: PowerTileSubsystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileSubsystem::StaticClassInit() */

void PowerTileSubsystem::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PowerTilePropagation_ConnectingDotHandler");
    (*pcVar3)(plVar2,asStack_10,FUN_03d54668,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PowerTilePropagationInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03d54aa0,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PowerTileSubsystem");
    (*pcVar3)(plVar2,asStack_10,FUN_03d54fb8,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerTileSubsystem::StaticGetClass() */

long * PowerTileSubsystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PowerTileSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerTileSubsystem::GetClass() const */

long * PowerTileSubsystem::GetClass(void)

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
  (*pcVar3)(plVar1,"PowerTileSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerTileSubsystem::GetPowerTileClassFromToolPacketName(std::string const&) */

undefined4 PowerTileSubsystem::GetPowerTileClassFromToolPacketName(string *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = std::operator==(param_1,"tool_powertile_alpha");
  uVar2 = 0;
  if (!bVar1) {
    bVar1 = std::operator==(param_1,"tool_powertile_beta");
    uVar2 = 1;
    if (!bVar1) {
      bVar1 = std::operator==(param_1,"tool_powertile_gamma");
      uVar2 = 2;
      if (!bVar1) {
        bVar1 = std::operator==(param_1,"tool_powertile_delta");
        uVar2 = 3;
        if (!bVar1) {
          bVar1 = std::operator==(param_1,"tool_powertile_epsilon");
          uVar2 = 4;
          if (!bVar1) {
            uVar2 = 0xffffffff;
          }
        }
      }
    }
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileSubsystem::onGameWon() */

void __thiscall PowerTileSubsystem::onGameWon(PowerTileSubsystem *this)

{
  bool bVar1;
  WorldDataManager *this_00;
  string *psVar2;
  long lVar3;
  undefined8 *puVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_18);
  this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  psVar2 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  lVar3 = WorldDataManager::FindWorldDataByLevelName(this_00,psVar2);
  if (lVar3 != 0) {
    thunk_FUN_05475e00(asStack_18,lVar3 + 0x38);
  }
  if (*(int *)(this + 0x40) == 0) {
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                        *)this);
    lVar3 = FUN_03d52688(*puVar4,puVar4[1]);
    if ((lVar3 != 0) && (bVar1 = std::operator==(asStack_18,"future"), bVar1)) {
      std::string::string(asStack_10,"tile_denial");
      Achievement::Queue(asStack_10,100.0);
      std::string::~string(asStack_10);
      nop();
      Achievement::ShowAll();
    }
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerTileSubsystem::GetPowerTileCount(PowerTileClass) */

int __thiscall PowerTileSubsystem::GetPowerTileCount(PowerTileSubsystem *this,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  RtMixedPtrBase *pRVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  
  uVar7 = 0;
  iVar8 = 0;
  if (param_2 == -1) {
    while( true ) {
      puVar3 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                          *)this);
      uVar6 = FUN_03d52688(*puVar3,puVar3[1]);
      if (uVar6 <= uVar7) break;
      puVar3 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                          *)this);
      uVar6 = uVar7 + 1;
      pRVar5 = (RtMixedPtrBase *)FUN_03d52694(*puVar3,uVar7);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(pRVar5);
      uVar7 = uVar6;
      if (cVar1 != '\0') {
        iVar8 = iVar8 + 1;
      }
    }
    return iVar8;
  }
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                      *)this);
  lVar4 = FUN_03d52688(*puVar3,puVar3[1]);
  if (lVar4 != 0) {
    do {
      puVar3 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                          *)this);
      pRVar5 = (RtMixedPtrBase *)FUN_03d52694(*puVar3,uVar7);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(pRVar5);
      if (cVar1 != '\0') {
        puVar3 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                 ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                            *)this);
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03d52694(*puVar3,uVar7);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        iVar2 = GridItemPowerTile::GetTileClass();
        if (iVar2 == param_2) {
          iVar8 = iVar8 + 1;
        }
      }
      uVar7 = uVar7 + 1;
      puVar3 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                          *)this);
      uVar6 = FUN_03d52688(*puVar3,puVar3[1]);
    } while (uVar7 < uVar6);
  }
  return iVar8;
}


/* PowerTileSubsystem::onGatherPlantedPacketCount(std::string const&, int*) */

void __thiscall
PowerTileSubsystem::onGatherPlantedPacketCount
          (PowerTileSubsystem *this,string *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  
  iVar1 = GetPowerTileClassFromToolPacketName(param_1);
  if (iVar1 != -1) {
    iVar6 = 0;
    uVar5 = 0;
    while( true ) {
      puVar3 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                          *)this);
      uVar4 = FUN_03d52688(*puVar3,puVar3[1]);
      if (uVar4 <= uVar5) break;
      puVar3 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                          *)this);
      uVar4 = uVar5 + 1;
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03d52694(*puVar3,uVar5);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      iVar2 = GridItemPowerTile::GetTileClass();
      uVar5 = uVar4;
      if (iVar1 == iVar2) {
        iVar6 = iVar6 + 1;
      }
    }
    *param_2 = *param_2 + iVar6;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileSubsystem::renderDots(Sexy::Graphics*) */

void __thiscall PowerTileSubsystem::renderDots(PowerTileSubsystem *this,Graphics *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  PowerTilePropagation_ConnectingDotHandler *this_00;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  puVar1 = (undefined8 *)
           Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
  lVar2 = FUN_03d5269c(*puVar1,puVar1[1]);
  if (lVar2 != 0) {
    do {
      puVar1 = (undefined8 *)
               Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
      lVar2 = FUN_03d526d8(*puVar1,uVar6);
      uVar4 = 0;
      while( true ) {
        uVar5 = *(undefined8 *)(lVar2 + 0x30);
        uVar3 = FUN_03d526e4(uVar5,*(undefined8 *)(lVar2 + 0x38));
        if (uVar3 <= uVar4) break;
        this_00 = (PowerTilePropagation_ConnectingDotHandler *)FUN_03d52714(uVar5,uVar4);
        PowerTilePropagation_ConnectingDotHandler::Draw(this_00,param_1);
        uVar4 = uVar4 + 1;
      }
      uVar6 = uVar6 + 1;
      puVar1 = (undefined8 *)
               Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
      uVar4 = FUN_03d5269c(*puVar1,puVar1[1]);
    } while (uVar6 < uVar4);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileSubsystem::FindPowerTileAt(Sexy::Point const&) const */

void __thiscall PowerTileSubsystem::FindPowerTileAt(PowerTileSubsystem *this,Point *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  RtWeakPtrBase *pRVar4;
  ResourceInfo *pRVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  TPoint<int> aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                      *)this);
  local_20 = FUN_03d536e4(*puVar3);
  local_18 = FUN_03d53734(puVar3[1]);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
    if (!bVar1) {
      pRVar5 = (ResourceInfo *)0x0;
LAB_03d538bc:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(pRVar5);
    }
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,pRVar4);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_28);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      GridItem::GetGridLocation();
      cVar2 = Sexy::TPoint<int>::operator==(aTStack_10,(TPoint *)param_1);
      if (cVar2 != '\0') {
        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        goto LAB_03d538bc;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  } while( true );
}


/* PowerTileSubsystem::CanAddPowerTileAt(PowerTileClass, Sexy::Point const&) */

bool __thiscall
PowerTileSubsystem::CanAddPowerTileAt(PowerTileSubsystem *this,undefined8 param_2,Point *param_3)

{
  long lVar1;
  
  lVar1 = FindPowerTileAt(this,param_3);
  return lVar1 == 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileSubsystem::onPlantPlanted(Plant*) */

void __thiscall PowerTileSubsystem::onPlantPlanted(PowerTileSubsystem *this,Plant *param_1)

{
  GridItemPowerTile *this_00;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,*(int *)(param_1 + 0x114),*(int *)(param_1 + 0x110));
  this_00 = (GridItemPowerTile *)FindPowerTileAt(this,aPStack_10);
  if (this_00 != (GridItemPowerTile *)0x0) {
    GridItemPowerTile::SetIsOccupied(this_00,true);
    *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileSubsystem::onLilyPadDied(GridItemLilyPad*) */

void PowerTileSubsystem::onLilyPadDied(GridItemLilyPad *param_1)

{
  GridItemPowerTile *this;
  long lVar1;
  Board *this_00;
  int local_20;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  this = (GridItemPowerTile *)FindPowerTileAt((PowerTileSubsystem *)param_1,(Point *)asStack_10);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  GridItem::GetGridLocation();
  GridItem::GetGridLocation();
  std::string::string(asStack_10,"");
  lVar1 = Board::GetPlantAt(this_00,local_20,local_14,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if ((this != (GridItemPowerTile *)0x0) && (lVar1 == 0)) {
    GridItemPowerTile::SetIsOccupied(this,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileSubsystem::AddToRenderQueue(RenderQueue*) */

void __thiscall PowerTileSubsystem::AddToRenderQueue(PowerTileSubsystem *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,renderDots);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<PowerTileSubsystem,void(PowerTileSubsystem::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,199999,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerTileSubsystem::PowerTileSubsystem() */

void __thiscall PowerTileSubsystem::PowerTileSubsystem(PowerTileSubsystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_0676b120;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


/* PowerTileSubsystem::StaticNew() */

PowerTileSubsystem * PowerTileSubsystem::StaticNew(void)

{
  PowerTileSubsystem *this;
  
  this = ::operator_new(0x48);
  PowerTileSubsystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileSubsystem::registerForEvents() */

void __thiscall PowerTileSubsystem::registerForEvents(PowerTileSubsystem *this)

{
  undefined *puVar1;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onToolAppliedPlantFood);
  local_110 = local_e8;
  local_120 = local_f8;
  uStack_118 = uStack_f0;
  MessageRouter::
  Subscribe<PlantGroup*,Sexy::CBMemberTranslatorX<PowerTileSubsystem,void(PowerTileSubsystem::*)(PlantGroup*)>>
            ((MessageRouter *)puVar1,Message::ToolAppliedPlantfood,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onToolAppliedPlantFoodToGridItem);
  local_140 = local_e0;
  uStack_138 = uStack_d8;
  local_130 = local_d0;
  MessageRouter::
  Subscribe<GridItem*,Sexy::CBMemberTranslatorX<PowerTileSubsystem,void(PowerTileSubsystem::*)(GridItem*)>>
            ((MessageRouter *)puVar1,Message::ToolAppliedPlantfoodToGridItem,&local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGatherPlantedPacketCount);
  local_150 = local_b8;
  local_160 = local_c8;
  uStack_158 = uStack_c0;
  MessageRouter::
  Subscribe<std::string_const&,int*,Sexy::CBMemberTranslatorX<PowerTileSubsystem,void(PowerTileSubsystem::*)(std::string_const&,int*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantedPacketCount,&local_160);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlanted);
  local_180 = local_b0;
  uStack_178 = uStack_a8;
  local_170 = local_a0;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PowerTileSubsystem,void(PowerTileSubsystem::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlanted,&local_180);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_170 = local_88;
  local_180 = local_98;
  uStack_178 = uStack_90;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PowerTileSubsystem,void(PowerTileSubsystem::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_180);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlantfooded);
  local_180 = local_80;
  uStack_178 = uStack_78;
  local_170 = local_70;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PowerTileSubsystem,void(PowerTileSubsystem::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlantfooded,&local_180);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gatherPlantingRestrictions);
  local_190 = local_58;
  local_1a0 = local_68;
  uStack_198 = uStack_60;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<PowerTileSubsystem,void(PowerTileSubsystem::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_1a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameWon);
  Sexy::Delegate0::Delegate0<PowerTileSubsystem,void(PowerTileSubsystem::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameWon,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,clearEverything);
  Sexy::Delegate0::Delegate0<PowerTileSubsystem,void(PowerTileSubsystem::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ClearBoard,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPowerTileAdded);
  local_140 = local_50;
  uStack_138 = uStack_48;
  local_130 = local_40;
  MessageRouter::
  Subscribe<GridItem*,Sexy::CBMemberTranslatorX<PowerTileSubsystem,void(PowerTileSubsystem::*)(GridItem*)>>
            ((MessageRouter *)puVar1,Message::PowerTilePlaced,&local_140);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerTileSubsystem::~PowerTileSubsystem() */

void __thiscall PowerTileSubsystem::~PowerTileSubsystem(PowerTileSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_0676b120;
  std::vector<PowerTilePropagationInfo,std::allocator<PowerTilePropagationInfo>>::~vector
            ((vector<PowerTilePropagationInfo,std::allocator<PowerTilePropagationInfo>> *)
             (this + 0x28));
  std::vector<Sexy::RtWeakPtr<GridItemPowerTile>,std::allocator<Sexy::RtWeakPtr<GridItemPowerTile>>>
  ::~vector((vector<Sexy::RtWeakPtr<GridItemPowerTile>,std::allocator<Sexy::RtWeakPtr<GridItemPowerTile>>>
             *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* PowerTileSubsystem::~PowerTileSubsystem() */

void __thiscall PowerTileSubsystem::~PowerTileSubsystem(PowerTileSubsystem *this)

{
  ~PowerTileSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileSubsystem::onPlantDied(Plant*) */

void __thiscall PowerTileSubsystem::onPlantDied(PowerTileSubsystem *this,Plant *param_1)

{
  GridItemPowerTile *this_00;
  long lVar1;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,*(int *)(param_1 + 0x114),*(int *)(param_1 + 0x110));
  this_00 = (GridItemPowerTile *)FindPowerTileAt(this,aPStack_10);
  lVar1 = FUN_03d555f4(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x110));
  if ((this_00 != (GridItemPowerTile *)0x0) && (lVar1 == 0)) {
    GridItemPowerTile::SetIsOccupied(this_00,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileSubsystem::GetGridItemType(PowerTileClass) */

void __thiscall PowerTileSubsystem::GetGridItemType(undefined8 param_1,int param_2)

{
  long lVar1;
  int iVar2;
  string *psVar3;
  ulong uVar4;
  
  lVar1 = ___stack_chk_guard;
  uVar4 = DAT_06ad7930 & 1;
  if (((DAT_06ad7930 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad7930), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ad7898,"powertile_alpha");
    nop();
    std::string::string((string *)&DAT_06ad78a0,"powertile_beta");
    nop();
    std::string::string((string *)&DAT_06ad78a8,"powertile_gamma");
    nop();
    std::string::string((string *)&DAT_06ad78b0,"powertile_delta");
    nop();
    std::string::string((string *)&DAT_06ad78b8,"powertile_epsilon");
    nop();
    __cxa_guard_release(&DAT_06ad7930);
    __cxa_atexit(FUN_03d5256c,uVar4,&DAT_06a88000);
  }
  if (((DAT_06ad7910 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad7910), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ad7960,(string *)&DAT_06ad7898,(allocator *)&DAT_06ad78c0);
    __cxa_guard_release(&DAT_06ad7910);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ad7960,
                 &DAT_06a88000);
  }
  FUN_03d52720(DAT_06ad7960,(long)param_2);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar3);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileSubsystem::addPowerTile(Sexy::Point const&, PowerTileClass, int) */

void __thiscall
PowerTileSubsystem::addPowerTile
          (undefined8 param_1_00,undefined4 *param_1,undefined4 param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  Board *pBVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  string asStack_30 [8];
  wstring awStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetGridItemType((PowerTileSubsystem *)aRStack_40,param_3);
  if (param_4 == 1) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    bVar1 = std::operator==((string *)(lVar3 + 8),"powertile_epsilon");
    if (bVar1) {
      uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
      std::string::string(asStack_30,"powertile_epsilon_avatar");
      Sexy::ToWString(asStack_30);
      Sexy::RtName::RtName((RtName *)aRStack_18,awStack_28);
      PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar4,0xd,(RtName *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      Sexy::RtName::~RtName((RtName *)aRStack_18);
      FUN_05476c50(awStack_28);
      std::string::~string(asStack_30);
      nop();
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_38);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)aRStack_40,(RtWeakPtr *)aRStack_38);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    }
  }
  pBVar5 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_40);
  Board::AddGridItem(pBVar5,aRStack_18,*param_1,param_1[1],0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PowerTileSubsystem::TryAddPowerTileAt(PowerTileClass, Sexy::Point const&, int) */

char __thiscall
PowerTileSubsystem::TryAddPowerTileAt
          (PowerTileSubsystem *this,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = CanAddPowerTileAt();
  if (cVar1 != '\0') {
    addPowerTile(this,param_3,param_2,param_4);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileSubsystem::onPowerTileAdded(GridItem*) */

void PowerTileSubsystem::onPowerTileAdded(GridItem *param_1)

{
  vector<Sexy::RtWeakPtr<GridItemPowerTile>,std::allocator<Sexy::RtWeakPtr<GridItemPowerTile>>>
  *this;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (vector<Sexy::RtWeakPtr<GridItemPowerTile>,std::allocator<Sexy::RtWeakPtr<GridItemPowerTile>>>
          *)std::
            _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                       *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<GridItemPowerTile>,std::allocator<Sexy::RtWeakPtr<GridItemPowerTile>>>
  ::push_back(this,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileSubsystem::FindPowerTilesByClass(PowerTileClass, std::vector<GridItemPowerTile*,
   std::allocator<GridItemPowerTile*> >&) */

void __thiscall
PowerTileSubsystem::FindPowerTilesByClass
          (PowerTileSubsystem *this,int param_2,
          vector<GridItemPowerTile*,std::allocator<GridItemPowerTile*>> *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  ulong uVar4;
  RtWeakPtr *this_01;
  ulong uVar5;
  ResourceInfo *local_10;
  long local_8;
  
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                      *)this);
  lVar3 = FUN_03d52688(*puVar2,puVar2[1]);
  if (lVar3 != 0) {
    do {
      puVar2 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                          *)this);
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03d52694(*puVar2,uVar5);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      iVar1 = GridItemPowerTile::GetTileClass();
      if (iVar1 == param_2) {
        puVar2 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                 ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                            *)this);
        this_01 = (RtWeakPtr *)FUN_03d52694(*puVar2,uVar5);
        local_10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
        std::vector<GridItemPowerTile*,std::allocator<GridItemPowerTile*>>::push_back
                  (param_3,(GridItemPowerTile **)&local_10);
      }
      uVar5 = uVar5 + 1;
      puVar2 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                          *)this);
      uVar4 = FUN_03d52688(*puVar2,puVar2[1]);
    } while (uVar5 < uVar4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileSubsystem::destroyPowerTile(GridItemPowerTile*) */

void __thiscall
PowerTileSubsystem::destroyPowerTile(PowerTileSubsystem *this,GridItemPowerTile *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar4;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar5;
  vector<Sexy::RtWeakPtr<GridItemPowerTile>,std::allocator<Sexy::RtWeakPtr<GridItemPowerTile>>>
  *pvVar6;
  undefined8 *puVar7;
  long lVar8;
  PowerTilePropagationInfo *this_01;
  vector<PowerTilePropagationInfo,std::allocator<PowerTilePropagationInfo>> *pvVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar4 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)std::
              _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
              ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                         *)this);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(pvVar4);
  while( true ) {
    pvVar4 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)std::
                _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                           *)this);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar4);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) break;
    this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    if (param_1 == (GridItemPowerTile *)pRVar5) {
      pvVar6 = (vector<Sexy::RtWeakPtr<GridItemPowerTile>,std::allocator<Sexy::RtWeakPtr<GridItemPowerTile>>>
                *)std::
                  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                  ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                             *)this);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::
                 vector<Sexy::RtWeakPtr<GridItemPowerTile>,std::allocator<Sexy::RtWeakPtr<GridItemPowerTile>>>
                 ::erase(pvVar6,local_10);
    }
    else {
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  puVar7 = (undefined8 *)
           Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
  iVar3 = FUN_03d5269c(*puVar7,puVar7[1]);
  uVar1 = iVar3 - 1;
  if (-1 < (int)uVar1) {
    lVar10 = (long)(int)uVar1 + -1;
    lVar8 = lVar10;
    lVar12 = (long)(int)uVar1;
    while( true ) {
      lVar11 = lVar8;
      puVar7 = (undefined8 *)
               Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
      lVar8 = FUN_03d526d8(*puVar7,lVar12);
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar8 + 0x18));
      if ((param_1 == (GridItemPowerTile *)pRVar5) && (*(char *)(lVar8 + 0x2c) == '\0')) {
        puVar7 = (undefined8 *)
                 Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
        this_01 = (PowerTilePropagationInfo *)FUN_03d526d8(*puVar7,lVar12);
        PowerTilePropagationInfo::DestroyTileGlows(this_01);
        pvVar9 = (vector<PowerTilePropagationInfo,std::allocator<PowerTilePropagationInfo>> *)
                 Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
        pvVar4 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(pvVar4);
        local_18 = __gnu_cxx::
                   __normal_iterator<FishingZombieGroup*,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>
                   ::operator+((__normal_iterator<FishingZombieGroup*,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>
                                *)&local_20,lVar12);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<PowerTilePropagationInfo,std::allocator<PowerTilePropagationInfo>>::erase
                  (pvVar9,local_10);
      }
      if (lVar11 == lVar10 - (ulong)uVar1) break;
      lVar8 = lVar11 + -1;
      lVar12 = lVar11;
    }
  }
  if (param_1 != (GridItemPowerTile *)0x0) {
    (**(code **)(*(long *)param_1 + 0x48))(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerTileSubsystem::DestroyPowerTileAt(Sexy::Point const&) */

void __thiscall PowerTileSubsystem::DestroyPowerTileAt(PowerTileSubsystem *this,Point *param_1)

{
  GridItemPowerTile *pGVar1;
  
  pGVar1 = (GridItemPowerTile *)FindPowerTileAt(this,param_1);
  if (pGVar1 != (GridItemPowerTile *)0x0) {
    destroyPowerTile(this,pGVar1);
    return;
  }
  return;
}


/* PowerTileSubsystem::destroyPowerTileAtIndex(int) */

void __thiscall PowerTileSubsystem::destroyPowerTileAtIndex(PowerTileSubsystem *this,int param_1)

{
  undefined8 *puVar1;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar2;
  
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                      *)this);
  this_00 = (RtWeakPtr *)FUN_03d52694(*puVar1,(long)param_1);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  destroyPowerTile(this,(GridItemPowerTile *)pRVar2);
  return;
}


/* PowerTileSubsystem::ClearPowerTiles() */

void __thiscall PowerTileSubsystem::ClearPowerTiles(PowerTileSubsystem *this)

{
  undefined8 *puVar1;
  long lVar2;
  
  while( true ) {
    puVar1 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                        *)this);
    lVar2 = FUN_03d52688(*puVar1,puVar1[1]);
    if (lVar2 == 0) break;
    destroyPowerTileAtIndex(this,0);
  }
  return;
}


/* PowerTileSubsystem::clearEverything() */

void __thiscall PowerTileSubsystem::clearEverything(PowerTileSubsystem *this)

{
  undefined8 *puVar1;
  long lVar2;
  
  while( true ) {
    puVar1 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                        *)this);
    lVar2 = FUN_03d52688(*puVar1,puVar1[1]);
    if (lVar2 == 0) break;
    destroyPowerTileAtIndex(this,0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileSubsystem::Update() */

void __thiscall PowerTileSubsystem::Update(PowerTileSubsystem *this)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  PowerTilePropagationInfo *pPVar5;
  PowerTilePropagation_ConnectingDotHandler *this_00;
  ulong uVar6;
  vector<PowerTilePropagationInfo,std::allocator<PowerTilePropagationInfo>> *pvVar7;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  ResourceInfo *pRVar8;
  PlantGroup *this_02;
  long lVar9;
  PlantGroup *this_03;
  GridItemLilyPad *this_04;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int iStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar4 = (undefined8 *)
           Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
  iVar3 = FUN_03d5269c(*puVar4,puVar4[1]);
  uVar1 = iVar3 - 1;
  if ((int)uVar1 < 0) {
LAB_03d56e44:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar12 = (long)(int)uVar1 + -1;
  lVar9 = lVar12;
  lVar14 = (long)(int)uVar1;
  do {
    lVar13 = lVar9;
    puVar4 = (undefined8 *)
             Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
    pPVar5 = (PowerTilePropagationInfo *)FUN_03d526d8(*puVar4,lVar14);
    uVar10 = 0;
    while( true ) {
      uVar11 = *(undefined8 *)(pPVar5 + 0x30);
      uVar6 = FUN_03d526e4(uVar11,*(undefined8 *)(pPVar5 + 0x38));
      if (uVar6 <= uVar10) break;
      this_00 = (PowerTilePropagation_ConnectingDotHandler *)FUN_03d52714(uVar11,uVar10);
      PowerTilePropagation_ConnectingDotHandler::Update(this_00);
      uVar10 = uVar10 + 1;
    }
    if (0.0 < *(float *)(pPVar5 + 0x28)) {
      fVar15 = (float)PVZ_Dt();
      fVar16 = *(float *)(pPVar5 + 0x28);
      *(float *)(pPVar5 + 0x28) = fVar16 - fVar15;
      if (fVar16 - fVar15 < 0.0) {
        if (pPVar5[0x2c] == (PowerTilePropagationInfo)0x0) {
          Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pPVar5 + 0x18));
          GridItem::GetGridLocation();
          GridItemPowerTile::OnPropagatedTo();
          this_02 = (PlantGroup *)
                    Board::GetPlantGroupAt
                              (*(Board **)(gLawnApp + 0x9f0),(int)local_18,local_18._4_4_);
          if ((this_02 == (PlantGroup *)0x0) || (cVar2 = PlantGroup::Empty(this_02), cVar2 != '\0'))
          {
            this_03 = (PlantGroup *)
                      Board::GetPlantGroupAt
                                (*(Board **)(gLawnApp + 0x9f0),(int)local_18 + -1,local_18._4_4_);
            if (this_03 != (PlantGroup *)0x0) {
              std::string::string((string *)&local_10,"cobcannon");
              cVar2 = PlantGroup::HasPlant(this_03,(string *)&local_10);
              std::string::~string((string *)&local_10);
              nop();
              if (cVar2 != '\0') {
                lVar9 = FUN_03d555f4(local_18 & 0xffffffff,local_18._4_4_);
                this_02 = this_03;
                goto LAB_03d56f28;
              }
            }
            lVar9 = FUN_03d555f4(local_18 & 0xffffffff,local_18._4_4_);
            if (this_02 != (PlantGroup *)0x0) goto LAB_03d56f28;
          }
          else {
            lVar9 = FUN_03d555f4(local_18 & 0xffffffff,local_18._4_4_);
LAB_03d56f28:
            cVar2 = PlantGroup::CanApplyPlantfood(this_02);
            if (cVar2 != '\0') {
              PlantGroup::ApplyPlantfood(this_02,false);
              std::string::string((string *)&local_10,"Play_UI_Future_PowerTile_Nitro_Transfer");
              RealObject::PlayPositionalSound((RealObject *)this_02,(string *)&local_10,0.0);
              std::string::~string((string *)&local_10);
              nop();
              goto LAB_03d56db4;
            }
          }
          if (lVar9 != 0) {
            nop();
            GridItemLilyPad::ApplyPlantfood(this_04);
          }
        }
        else {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(pPVar5 + 0x18))
          ;
          GridItem::GetGridLocation();
          pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pPVar5 + 0x18));
          destroyPowerTile(this,(GridItemPowerTile *)pRVar8);
          Board::KillPlantAt(*(Board **)(gLawnApp + 0x9f0),local_10,iStack_c);
        }
      }
    }
LAB_03d56db4:
    cVar2 = PowerTilePropagationInfo::IsDone(pPVar5);
    if (cVar2 != '\0') {
      puVar4 = (undefined8 *)
               Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
      pPVar5 = (PowerTilePropagationInfo *)FUN_03d526d8(*puVar4,lVar14);
      PowerTilePropagationInfo::DestroyTileGlows(pPVar5);
      pvVar7 = (vector<PowerTilePropagationInfo,std::allocator<PowerTilePropagationInfo>> *)
               Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
      this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_01);
      local_18 = __gnu_cxx::
                 __normal_iterator<FishingZombieGroup*,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>
                 ::operator+((__normal_iterator<FishingZombieGroup*,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>
                              *)&local_20,lVar14);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<PowerTilePropagationInfo,std::allocator<PowerTilePropagationInfo>>::erase
                (pvVar7,CONCAT44(iStack_c,local_10));
    }
    if (lVar13 == lVar12 - (ulong)uVar1) goto LAB_03d56e44;
    lVar9 = lVar13 + -1;
    lVar14 = lVar13;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileSubsystem::onPlantPlantfooded(Plant*) */

void __thiscall PowerTileSubsystem::onPlantPlantfooded(PowerTileSubsystem *this,Plant *param_1)

{
  uint uVar1;
  int iVar2;
  GridItemPowerTile *this_00;
  GridItemPowerTileProps *pGVar3;
  undefined8 *puVar4;
  long lVar5;
  ResourceInfo *pRVar6;
  PowerTilePropagationInfo *this_01;
  vector<PowerTilePropagationInfo,std::allocator<PowerTilePropagationInfo>> *pvVar7;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_02;
  long lVar8;
  long lVar9;
  long lVar10;
  Point aPStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_38,*(int *)(param_1 + 0x114),*(int *)(param_1 + 0x110));
  this_00 = (GridItemPowerTile *)FindPowerTileAt(this,aPStack_38);
  if (this_00 != (GridItemPowerTile *)0x0) {
    pGVar3 = GridItem::GetProps<GridItemPowerTileProps>();
    Sexy::Insets::Insets(aIStack_18,(Insets *)(pGVar3 + 0xd4));
    Plant::SetPlantfoodShineColor(param_1,(Color *)aIStack_18);
    std::string::string((string *)&local_20,"Play_UI_Future_PowerTile_Nitro_Activate");
    RealObject::PlayPositionalSound((RealObject *)param_1,(string *)&local_20,0.0);
    std::string::~string((string *)&local_20);
    nop();
    GridItemPowerTile::OnOccupantPlantfooded(this_00);
    puVar4 = (undefined8 *)
             Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
    iVar2 = FUN_03d5269c(*puVar4,puVar4[1]);
    uVar1 = iVar2 - 1;
    if (-1 < (int)uVar1) {
      lVar8 = (long)(int)uVar1 + -1;
      lVar5 = lVar8;
      lVar10 = (long)(int)uVar1;
      while( true ) {
        lVar9 = lVar5;
        puVar4 = (undefined8 *)
                 Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
        lVar5 = FUN_03d526d8(*puVar4,lVar10);
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar5 + 0x18));
        if ((this_00 == (GridItemPowerTile *)pRVar6) && (*(char *)(lVar5 + 0x2c) != '\0')) {
          puVar4 = (undefined8 *)
                   Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
          this_01 = (PowerTilePropagationInfo *)FUN_03d526d8(*puVar4,lVar10);
          PowerTilePropagationInfo::DestroyTileGlows(this_01);
          pvVar7 = (vector<PowerTilePropagationInfo,std::allocator<PowerTilePropagationInfo>> *)
                   Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
          this_02 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this)
          ;
          local_30 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(this_02);
          local_28 = __gnu_cxx::
                     __normal_iterator<FishingZombieGroup*,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>
                     ::operator+((__normal_iterator<FishingZombieGroup*,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>
                                  *)&local_30,lVar10);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_20,(__normal_iterator *)&local_28);
          std::vector<PowerTilePropagationInfo,std::allocator<PowerTilePropagationInfo>>::erase
                    (pvVar7,local_20);
        }
        if (lVar9 == lVar8 - (ulong)uVar1) break;
        lVar5 = lVar9 + -1;
        lVar10 = lVar9;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileSubsystem::gatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
PowerTileSubsystem::gatherPlantingRestrictions
          (PowerTileSubsystem *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  bool bVar1;
  long lVar2;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==((string *)(param_2 + 8),"powerplant");
  if ((bVar1) && (lVar2 = FindPowerTileAt(this,param_1), lVar2 != 0)) {
    local_c = 0x24;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)&local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileSubsystem::propagateFromTile(GridItemPowerTile*, bool) */

void __thiscall
PowerTileSubsystem::propagateFromTile
          (PowerTileSubsystem *this,GridItemPowerTile *param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar7;
  ulong uVar8;
  vector<PowerTilePropagationInfo,std::allocator<PowerTilePropagationInfo>> *this_01;
  undefined8 *puVar9;
  PowerTilePropagationInfo *this_02;
  GridItemPowerTileProps *pGVar10;
  ulong uVar11;
  float fVar12;
  int local_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  PowerTilePropagationInfo local_50 [16];
  undefined4 local_40;
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_38 [8];
  float local_30;
  float local_2c;
  float local_28;
  undefined1 local_24;
  long local_8;
  
  uVar11 = 0;
  local_8 = ___stack_chk_guard;
  lVar4 = GetDefaultGameProps();
  GridItem::GetGridLocation();
  iVar2 = GridItemPowerTile::GetTileClass();
  puVar5 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                      *)this);
  lVar6 = FUN_03d52688(*puVar5,puVar5[1]);
  if (lVar6 != 0) {
    do {
      puVar5 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                          *)this);
      this_00 = (RtWeakPtr *)FUN_03d52694(*puVar5,uVar11);
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      if (pRVar7 != (ResourceInfo *)0x0) {
        GridItem::GetGridLocation();
        iVar3 = GridItemPowerTile::GetTileClass();
        if ((iVar3 == iVar2) &&
           (cVar1 = Sexy::TPoint<int>::operator!=((TPoint<int> *)&local_78,(TPoint *)&local_80),
           cVar1 != '\0')) {
          PowerTilePropagationInfo::PowerTilePropagationInfo(local_50);
          local_40 = GridItemPowerTile::GetTileClass();
          fVar12 = (float)Distance2D((float)local_80,(float)iStack_7c,(float)local_78,
                                     (float)iStack_74);
          local_30 = *(float *)(lVar4 + 0x60);
          local_2c = local_30 + *(float *)(lVar4 + 0x5c) * fVar12;
          local_28 = local_2c;
          local_24 = param_2;
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    (aRStack_38,(RtWeakPtrBase *)&local_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
          this_01 = (vector<PowerTilePropagationInfo,std::allocator<PowerTilePropagationInfo>> *)
                    Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
          std::vector<PowerTilePropagationInfo,std::allocator<PowerTilePropagationInfo>>::push_back
                    (this_01,local_50);
          Sexy::Color::Color((Color *)&local_70);
          if (param_2) {
            Sexy::Color::Color((Color *)&local_60,2);
            local_70 = local_60;
            uStack_68 = uStack_58;
          }
          else {
            pGVar10 = GridItem::GetProps<GridItemPowerTileProps>();
            local_70 = *(undefined8 *)(pGVar10 + 0xd4);
            uStack_68 = CONCAT44((int)(*(float *)(lVar4 + 0x58) * 255.0),
                                 (int)*(undefined8 *)(pGVar10 + 0xdc));
          }
          puVar5 = (undefined8 *)
                   Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
          puVar9 = (undefined8 *)
                   Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
          lVar6 = FUN_03d5269c(*puVar9,puVar9[1]);
          this_02 = (PowerTilePropagationInfo *)FUN_03d526d8(*puVar5,lVar6 + -1);
          PowerTilePropagationInfo::BuildTileGlows(this_02,(Color *)&local_70);
          PowerTilePropagationInfo::~PowerTilePropagationInfo(local_50);
        }
      }
      uVar11 = uVar11 + 1;
      puVar5 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                          *)this);
      uVar8 = FUN_03d52688(*puVar5,puVar5[1]);
    } while (uVar11 < uVar8);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PowerTileSubsystem::DestroyPowerTileAtAndPropagate(Sexy::Point const&) */

void __thiscall
PowerTileSubsystem::DestroyPowerTileAtAndPropagate(PowerTileSubsystem *this,Point *param_1)

{
  GridItemPowerTile *pGVar1;
  
  pGVar1 = (GridItemPowerTile *)FindPowerTileAt(this,param_1);
  if (pGVar1 != (GridItemPowerTile *)0x0) {
    propagateFromTile(this,pGVar1,true);
    destroyPowerTile(this,pGVar1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileSubsystem::onToolAppliedPlantFoodToGridItem(GridItem*) */

void PowerTileSubsystem::onToolAppliedPlantFoodToGridItem(GridItem *param_1)

{
  char cVar1;
  GridItemPowerTile *this;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  this = (GridItemPowerTile *)FindPowerTileAt((PowerTileSubsystem *)param_1,aPStack_10);
  if (this != (GridItemPowerTile *)0x0) {
    cVar1 = GridItemPowerTile::IsDisabled(this);
    if (cVar1 == '\0') {
      propagateFromTile((PowerTileSubsystem *)param_1,this,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileSubsystem::onToolAppliedPlantFood(PlantGroup*) */

void __thiscall
PowerTileSubsystem::onToolAppliedPlantFood(PowerTileSubsystem *this,PlantGroup *param_1)

{
  char cVar1;
  GridItemPowerTile *this_00;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03d52ed8(aPStack_10,*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8));
  this_00 = (GridItemPowerTile *)FindPowerTileAt(this,aPStack_10);
  if (this_00 != (GridItemPowerTile *)0x0) {
    cVar1 = GridItemPowerTile::IsDisabled(this_00);
    if (cVar1 == '\0') {
      propagateFromTile(this,this_00,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

