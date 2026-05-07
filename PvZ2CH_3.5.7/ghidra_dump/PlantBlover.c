// Class: PlantBlover


/* PlantBlover::PlantBlover() */

void __thiscall PlantBlover::PlantBlover(PlantBlover *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067b2a50;
  return;
}


/* PlantBlover::StaticNew() */

PlantBlover * PlantBlover::StaticNew(void)

{
  PlantBlover *this;
  
  this = ::operator_new(0x28);
  PlantBlover(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBlover::StaticClassInit() */

void PlantBlover::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantBlover");
    (*pcVar2)(plVar1,asStack_10,FUN_03ffba20,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBlover::StaticGetClass() */

long * PlantBlover::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantBlover",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBlover::GetClass() const */

long * PlantBlover::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantBlover",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBlover::~PlantBlover() */

void __thiscall PlantBlover::~PlantBlover(PlantBlover *this)

{
  *(undefined ***)this = &PTR_GetClass_067b2a50;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantBlover::~PlantBlover() */

void __thiscall PlantBlover::~PlantBlover(PlantBlover *this)

{
  ~PlantBlover(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBlover::Initialize() */

void __thiscall PlantBlover::Initialize(PlantBlover *this)

{
  char cVar1;
  long *plVar2;
  Plant *this_00;
  RealObject *this_01;
  code *pcVar3;
  undefined4 uVar4;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this_00 = *(Plant **)(this + 0x10);
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this_00 + 0x124) = uVar4;
  cVar1 = Plant::IsOnBoard(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pcVar3 = *(code **)(*plVar2 + 0x130);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    (*pcVar3)(plVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    this_01 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_58,"Play_Plant_Blover_Attack");
    RealObject::PlayPositionalSound(this_01,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBlover::BlowZombies() */

void __thiscall PlantBlover::BlowZombies(PlantBlover *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  RealObject *this_00;
  RtObject *pRVar6;
  Zombie *pZVar7;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar8;
  ZombieBlowerSubSystem *pZVar9;
  ResourceInfo *pRVar10;
  ZombieGentleman *this_02;
  int extraout_w1;
  Plant *pPVar11;
  ZombieBlowerSubSystem *pZVar13;
  undefined4 uVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  RtId aRStack_78 [8];
  Iterator aIStack_70 [32];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_70,uVar4,0x29);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_70);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_70);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_70);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_80,(RtWeakPtrBase *)aRStack_78);
    Sexy::RtId::~RtId(aRStack_78);
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
    cVar2 = (**(code **)(*plVar5 + 0x328))();
    if (cVar2 == '\0') {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
      if (*(code **)(*plVar5 + 1000) == Zombie::CanBeBlovered) {
        cVar2 = Zombie::CanBeBlovered();
      }
      else {
        cVar2 = (**(code **)(*plVar5 + 1000))();
      }
      if (cVar2 != '\0') {
        this_00 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
        cVar2 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10));
        if (cVar2 != '\0') {
          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
          pPVar11 = *(Plant **)(this + 0x10);
          if (*(code **)(*plVar5 + 0x340) != Zombie::OnBeforeBlown) {
            (**(code **)(*plVar5 + 0x340))(plVar5,pPVar11);
            pPVar11 = *(Plant **)(this + 0x10);
          }
          MessageRouter::Post<Plant*,Plant*>
                    ((MessageRouter *)gMessageRouter,Message::PlantBlow,pPVar11);
          pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
          bVar1 = Sexy::RtObject::IsA<ZombieFutureJetpack>(pRVar6);
          if (bVar1) {
            MessageRouter::Post((_func_void *)gMessageRouter);
          }
          pZVar7 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
          cVar2 = Zombie::IsOnGround(pZVar7);
          if (cVar2 == '\0') {
            pZVar7 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
            this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar7);
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
            FUN_05475d88(aRStack_78,lVar8 + 8);
            pZVar7 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
            iVar3 = Zombie::GetSizeType(pZVar7);
            if (iVar3 != 2) {
              pZVar7 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
              cVar2 = Zombie::CanTakeFatalDamage(pZVar7);
              if (cVar2 != '\0') {
                bVar1 = std::operator==((string *)aRStack_78,"seagull");
                if ((((((((bVar1) ||
                         (bVar1 = std::operator==((string *)aRStack_78,"pirate_captain_parrot"),
                         bVar1)) ||
                        (bVar1 = std::operator==((string *)aRStack_78,"swashbuckler"), bVar1)) ||
                       ((bVar1 = std::operator==((string *)aRStack_78,"prospector"), bVar1 ||
                        (bVar1 = std::operator==((string *)aRStack_78,"future_jetpack"), bVar1))))
                      || (bVar1 = std::operator==((string *)aRStack_78,"future_jetpack_disco"),
                         bVar1)) ||
                     (((bVar1 = std::operator==((string *)aRStack_78,"kongfu_monk_imp"), bVar1 ||
                       (bVar1 = std::operator==((string *)aRStack_78,"kongfu_rocket"), bVar1)) ||
                      ((bVar1 = std::operator==((string *)aRStack_78,"iceage_ski"), bVar1 ||
                       (((bVar1 = std::operator==((string *)aRStack_78,"iceage_dodo"), bVar1 ||
                         (bVar1 = std::operator==((string *)aRStack_78,"lostcity_bug"), bVar1)) ||
                        (bVar1 = std::operator==((string *)aRStack_78,"lostcity_bug_armor1"), bVar1)
                        ))))))) ||
                    ((bVar1 = std::operator==((string *)aRStack_78,"lostcity_bug_armor2"), bVar1 ||
                     (bVar1 = std::operator==((string *)aRStack_78,"lostcity_relichunter"), bVar1)))
                    ) || ((bVar1 = std::operator==((string *)aRStack_78,"children_airbubble"), bVar1
                          || (((bVar1 = std::operator==((string *)aRStack_78,"children_ballon"),
                               bVar1 || (bVar1 = std::operator==((string *)aRStack_78,
                                                                 "modern_balloon"), bVar1)) ||
                              ((bVar1 = std::operator==((string *)aRStack_78,"wave_airbubble"),
                               bVar1 || (((bVar1 = std::operator==((string *)aRStack_78,"summer_bug"
                                                                  ), bVar1 ||
                                          (bVar1 = std::operator==((string *)aRStack_78,
                                                                   "summer_bug_armor1"), bVar1)) ||
                                         (bVar1 = std::operator==((string *)aRStack_78,
                                                                  "summer_bug_armor2"), bVar1)))))))
                          ))) {
LAB_03ffbf88:
                  pZVar9 = Board::GetGameSubSystem<ZombieBlowerSubSystem>
                                     (*(Board **)(gLawnApp + 0x9f0));
                  uVar4 = *(undefined8 *)(this + 0x10);
                  pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_80)
                  ;
                  lVar8 = FUN_03ffbbf8(*(undefined8 *)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
                  pZVar13._0_4_ = *(ZombieBlowerSubSystem **)(lVar8 + 0x2b8);
                  lVar8 = FUN_03ffbbf8(*(undefined8 *)(this + 0x10));
                  uVar12 = *(undefined4 *)(lVar8 + 700);
                  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
                  ZombieBlowerSubSystem::BlowZombie
                            (pZVar13._0_4_,uVar12,pZVar9,uVar4,pRVar10,aRStack_50);
                  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  ::~RtReflectionDelegate
                            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                              *)aRStack_50);
                }
                else {
                  pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
                  bVar1 = Sexy::RtObject::IsA<ZombieImp>(pRVar6);
                  if ((bVar1) ||
                     (bVar1 = std::operator==((string *)aRStack_78,"pumpkin_scarecrow_bird"), bVar1)
                     ) goto LAB_03ffbf88;
                  pZVar7 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
                  cVar2 = Zombie::IsJumping(pZVar7);
                  if (cVar2 != '\0') goto LAB_03ffbf88;
                }
                bVar1 = std::operator==((string *)aRStack_78,"steam_gentleman");
                if (bVar1) {
                  pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
                  this_02 = Sexy::RtObject::Cast<ZombieGentleman>(pRVar6);
                  if ((this_02 != (ZombieGentleman *)0x0) &&
                     (cVar2 = Zombie::IsFlying((Zombie *)this_02), cVar2 != '\0')) {
                    Zombie::setZombieState((Zombie *)this_02,0x24,0);
                    ZombieGentleman::setIsHasUmbrella(this_02,false);
                  }
                }
              }
            }
            std::string::~string((string *)aRStack_78);
          }
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
    Sexy::RtDbTable::Iterator::operator++(aIStack_70,extraout_w1);
  } while( true );
}


/* PlantBlover::UpdateActions() */

void __thiscall PlantBlover::UpdateActions(PlantBlover *this)

{
  ZombieBlowerSubSystem *pZVar1;
  
  BlowZombies(this);
  pZVar1 = Board::GetGameSubSystem<ZombieBlowerSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  if (pZVar1 != (ZombieBlowerSubSystem *)0x0) {
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  return;
}

