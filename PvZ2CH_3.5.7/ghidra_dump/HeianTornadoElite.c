// Class: HeianTornadoElite


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianTornadoElite::StaticClassInit() */

void HeianTornadoElite::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeianTornadoElite");
    (*pcVar2)(plVar1,asStack_10,FUN_03d2d164,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeianTornadoElite::StaticGetClass() */

long * HeianTornadoElite::StaticGetClass(void)

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
  uVar2 = HeianTornado::StaticGetClass();
  (*pcVar3)(plVar1,"HeianTornadoElite",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeianTornadoElite::GetClass() const */

long * HeianTornadoElite::GetClass(void)

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
  uVar2 = HeianTornado::StaticGetClass();
  (*pcVar3)(plVar1,"HeianTornadoElite",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeianTornadoElite::HeianTornadoElite() */

void __thiscall HeianTornadoElite::HeianTornadoElite(HeianTornadoElite *this)

{
  HeianTornado::HeianTornado((HeianTornado *)this);
  *(undefined ***)this = &PTR_GetClass_06767d00;
  *(undefined ***)(this + 0x10) = &PTR__HeianTornadoElite_06767ef0;
  return;
}


/* HeianTornadoElite::StaticNew() */

HeianTornadoElite * HeianTornadoElite::StaticNew(void)

{
  HeianTornadoElite *this;
  
  this = ::operator_new(0x1d8);
  HeianTornadoElite(this);
  return this;
}


/* HeianTornadoElite::~HeianTornadoElite() */

void __thiscall HeianTornadoElite::~HeianTornadoElite(HeianTornadoElite *this)

{
  *(undefined ***)this = &PTR_GetClass_06767d00;
  *(undefined ***)(this + 0x10) = &PTR__HeianTornadoElite_06767ef0;
  HeianTornado::~HeianTornado((HeianTornado *)this);
  return;
}


/* non-virtual thunk to HeianTornadoElite::~HeianTornadoElite() */

void __thiscall HeianTornadoElite::~HeianTornadoElite(HeianTornadoElite *this)

{
  ~HeianTornadoElite(this + -0x10);
  return;
}


/* HeianTornadoElite::~HeianTornadoElite() */

void __thiscall HeianTornadoElite::~HeianTornadoElite(HeianTornadoElite *this)

{
  ~HeianTornadoElite(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HeianTornadoElite::~HeianTornadoElite() */

void __thiscall HeianTornadoElite::~HeianTornadoElite(HeianTornadoElite *this)

{
  ~HeianTornadoElite(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianTornadoElite::OnCollideEntity(BoardEntity*) */

void __thiscall HeianTornadoElite::OnCollideEntity(HeianTornadoElite *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  RtObject *this_02;
  HeianTornadoProps *pHVar5;
  ZombieGum *pZVar6;
  long extraout_x0;
  undefined8 *puVar7;
  Plant *this_03;
  long *plVar8;
  Zombie *pZVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  RealObject *this_04;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 != (BoardEntity *)0x0) &&
      (bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), !bVar1)) &&
     (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), !bVar1)) {
    uVar2 = Sexy::RtObject::IsA<ZombieTowerDefendBasic>((RtObject *)param_1);
    if (!(bool)uVar2) {
      bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
      if (bVar1) {
        iVar4 = FUN_03d2c750(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
        this_02 = (RtObject *)Projectile::GetProps((Projectile *)this);
        pHVar5 = Sexy::RtObject::Cast<HeianTornadoProps>(this_02);
        if (iVar4 < *(int *)(pHVar5 + 0x1e0)) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)&local_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
          pZVar6 = Sexy::RtObject::Cast<ZombieGum>((RtObject *)param_1);
          if (pZVar6 == (ZombieGum *)0x0) {
            plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
            cVar3 = (**(code **)(*plVar8 + 0x328))();
            if (cVar3 == '\0') {
              pZVar9 = (Zombie *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
              iVar4 = Zombie::GetSizeType(pZVar9);
              if (iVar4 != 2) {
                this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x1a8);
                this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x1c0);
                uVar10 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::begin(this_00);
                uVar11 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::end(this_00);
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)&local_48);
                local_40 = FUN_03d2ebc0(uVar10,uVar11,(RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
                std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_20);
                uVar10 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::begin(this_01);
                uVar11 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::end(this_01);
                local_38 = std::
                           find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<Zombie>>
                                     (uVar10,uVar11,(RtWeakPtr<Sexy::SoundResource> *)&local_48);
                local_30[0] = std::
                              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              ::end(this_01);
                bVar1 = __gnu_cxx::operator==
                                  ((__normal_iterator *)&local_38,(__normal_iterator *)local_30);
                if (bVar1) {
                  local_20 = std::
                             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             ::end(this_00);
                  bVar1 = __gnu_cxx::operator==
                                    ((__normal_iterator *)&local_40,(__normal_iterator *)&local_20);
                  if (bVar1) {
                    pZVar9 = (Zombie *)
                             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
                    cVar3 = Zombie::IsControlled(pZVar9);
                    if (cVar3 == '\0') {
                      PushZombieData::PushZombieData((PushZombieData *)&local_20);
                      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                                ((RtWeakPtr<PowerPropertySheet> *)&local_20,(RtWeakPtr *)&local_48);
                      local_18 = HeianTornado::SyncParameters((HeianTornado *)this);
                      std::vector<PushZombieData,std::allocator<PushZombieData>>::push_back
                                ((vector<PushZombieData,std::allocator<PushZombieData>> *)this_00,
                                 (PushZombieData *)&local_20);
                      pZVar9 = (Zombie *)
                               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
                      Zombie::SetIsControlled(pZVar9,true);
                      uVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
                      Zombie::ApplyCondition((Zombie *)0x41200000,0,uVar10,0x18,1);
                      this_04 = (RealObject *)
                                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
                      std::string::string((string *)local_30,"Play_Bonk");
                      RealObject::PlayPositionalSound(this_04,(string *)local_30,0.0);
                      std::string::~string((string *)local_30);
                      nop();
                      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_20);
                    }
                  }
                }
                uVar2 = 0;
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
                goto LAB_03d30060;
              }
            }
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
          goto LAB_03d30060;
        }
      }
      else {
        bVar1 = Sexy::RtObject::IsA<PlantGroup>((RtObject *)param_1);
        if (!bVar1) {
          uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
          goto LAB_03d30060;
        }
        nop();
        if (extraout_x0 != 0) {
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
          BoardEntity::CalcGridPosition();
          Sexy::Insets::Insets((Insets *)local_30,local_48 + -1,local_44 + -1,3,3);
          EntityFinder::GetEntitiesInGridSquares
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,
                     (Insets *)local_30);
          local_40 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)&local_20);
          local_38 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_20);
          while( true ) {
            uVar2 = __gnu_cxx::operator!=
                              ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
            if (!(bool)uVar2) break;
            puVar7 = (undefined8 *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
            this_03 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar7);
            if ((this_03 != (Plant *)0x0) &&
               (cVar3 = Plant::IsIgnoreControlAndDmg(this_03), cVar3 == '\0')) {
              Plant::beThrown(this_03);
            }
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
          }
          (**(code **)(*(long *)this + 0x48))(this);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
          goto LAB_03d30060;
        }
      }
    }
  }
  uVar2 = 0;
LAB_03d30060:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

