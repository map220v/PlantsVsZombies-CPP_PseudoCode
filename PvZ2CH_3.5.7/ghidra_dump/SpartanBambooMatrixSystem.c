// Class: SpartanBambooMatrixSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpartanBambooMatrixSystem::StaticClassInit() */

void SpartanBambooMatrixSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantMatrix");
    (*pcVar3)(plVar2,asStack_10,FUN_04e49b38,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SpartanBambooMatrixSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_04e48374,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpartanBambooMatrixSystem::StaticGetClass() */

long * SpartanBambooMatrixSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SpartanBambooMatrixSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpartanBambooMatrixSystem::GetClass() const */

long * SpartanBambooMatrixSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"SpartanBambooMatrixSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpartanBambooMatrixSystem::GetAttackFrequency(int) */

SpartanBambooMatrixSystem * __thiscall
SpartanBambooMatrixSystem::GetAttackFrequency(SpartanBambooMatrixSystem *this,int param_1)

{
  if ((uint)param_1 < 3) {
    this = (SpartanBambooMatrixSystem *)&DAT_05755d90;
  }
  return this;
}


/* SpartanBambooMatrixSystem::GetAttackSpeed(float) */

undefined4 SpartanBambooMatrixSystem::GetAttackSpeed(float param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x3f800000;
  if (param_1 != 3.0) {
    if (param_1 == 5.0) {
      return 0x3f4ccccd;
    }
    if (param_1 == 8.0) {
      uVar1 = 0x3f200000;
    }
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpartanBambooMatrixSystem::HasPlantsCondition(std::vector<Sexy::RtWeakPtr<Plant>,
   std::allocator<Sexy::RtWeakPtr<Plant> > >) */

void __thiscall
SpartanBambooMatrixSystem::HasPlantsCondition(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  RtMixedPtrBase *this;
  RtWeakPtrBase *pRVar5;
  ulong uVar6;
  undefined8 uVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar7 = *param_2;
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_04e43a00(uVar7,param_2[1]);
  if (lVar3 == 4) {
    uVar4 = 4;
    for (uVar6 = 0; uVar6 < uVar4; uVar6 = uVar6 + 1) {
      this = (RtMixedPtrBase *)FUN_04e43a2c(uVar7,uVar6);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
      if (cVar1 != '\0') {
        pRVar5 = (RtWeakPtrBase *)FUN_04e43a2c(*param_2,uVar6);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar5);
        uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        cVar2 = Plant::HasCondition(uVar7,1);
        if (cVar2 == '\0') {
          uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          cVar2 = Plant::HasCondition(uVar7,6);
          if (cVar2 == '\0') {
            uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            cVar2 = Plant::HasCondition(uVar7,2);
            if (cVar2 == '\0') {
              uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
              cVar2 = Plant::HasCondition(uVar7,0x12);
              if (cVar2 == '\0') {
                uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
                cVar2 = Plant::HasCondition(uVar7,0xf);
                if (cVar2 == '\0') {
                  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
                  cVar2 = FUN_04e43920(*(undefined1 *)(lVar3 + 0x278));
                  if (cVar2 == '\0') {
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
                    goto LAB_04e45580;
                  }
                }
              }
            }
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        goto LAB_04e45548;
      }
LAB_04e45580:
      uVar7 = *param_2;
      uVar4 = FUN_04e43a00(uVar7,param_2[1]);
    }
  }
  cVar1 = '\0';
LAB_04e45548:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpartanBambooMatrixSystem::OnKillZombie(int, Zombie*) */

void __thiscall
SpartanBambooMatrixSystem::OnKillZombie(SpartanBambooMatrixSystem *this,int param_1,Zombie *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  RtWeakPtrBase *pRVar5;
  Plant *this_00;
  ulong uVar6;
  RtMixedPtrBase *this_01;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (-1 < param_1) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x10));
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x10));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      if (param_1 == *(int *)((long)puVar3 + 0x1c)) {
        uVar8 = *puVar3;
        uVar7 = 0;
        lVar4 = FUN_04e43a00(uVar8,puVar3[1]);
        if (lVar4 == 4) {
          uVar6 = 4;
          for (; uVar7 < uVar6; uVar7 = uVar7 + 1) {
            this_01 = (RtMixedPtrBase *)FUN_04e43a18(uVar8,uVar7);
            cVar2 = Sexy::RtMixedPtrBase::IsValid(this_01);
            if (cVar2 != '\0') {
              puVar3 = (undefined8 *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
              pRVar5 = (RtWeakPtrBase *)FUN_04e43a18(*puVar3,uVar7);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_10,pRVar5);
              this_00 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
              Plant::OnKillZombie(this_00,param_2);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
            }
            puVar3 = (undefined8 *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
            uVar8 = *puVar3;
            uVar6 = FUN_04e43a00(uVar8,puVar3[1]);
          }
        }
        break;
      }
      FUN_04e45b60((exception_ptr *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpartanBambooMatrixSystem::SetPlantBerserkerCondition(int, int) */

void SpartanBambooMatrixSystem::SetPlantBerserkerCondition(int param_1,int param_2)

{
  OnKillZombie((SpartanBambooMatrixSystem *)(ulong)(uint)param_1,param_2,(Zombie *)0x0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpartanBambooMatrixSystem::PlayMatrixEffect(Sexy::SexyVector3 const&) */

void SpartanBambooMatrixSystem::PlayMatrixEffect(SexyVector3 *param_1)

{
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  float *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  float fVar3;
  float fVar4;
  string asStack_28 [8];
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_SPARTANBAMBOO_EFFECT_MATRIX");
  nop();
  fVar4 = *in_x1;
  fVar3 = in_x1[1];
  GetPAMByName(asStack_28);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Effect_PopAnim::SetCentered(pEVar1,true);
  StandaloneEffect::SetKeepAlive((StandaloneEffect *)pEVar1,true);
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    BoardConstants::GRIDSQUARE_HEIGHT();
  }
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar4 - 30.0,fVar3 + 20.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar1,(SexyVector3 *)aRStack_18,-1);
  FUN_04e43900(pEVar1 + 0x1c,0x61a82);
  std::string::string(asStack_20,"idle");
  std::string::string((string *)aRStack_18,"idle02");
  PVZ_EOT();
  Effect_PopAnim::PlaySingleAndLoopingAnimation(pEVar1,asStack_20,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  std::string::~string(asStack_20);
  nop();
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  GetPAMByName(asStack_28);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Effect_PopAnim::SetCentered(pEVar1,true);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar4 - 10.0,fVar3 + 20.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar1,(SexyVector3 *)aRStack_18,-1);
  FUN_04e43900(pEVar1 + 0x1c,0x65131);
  std::string::string((string *)aRStack_18,"idle04");
  Effect_PopAnim::PlaySingleAnimation(pEVar1,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpartanBambooMatrixSystem::SpartanBambooMatrixSystem() */

void __thiscall
SpartanBambooMatrixSystem::SpartanBambooMatrixSystem(SpartanBambooMatrixSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_069dea60;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  *(undefined4 *)(this + 0x28) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* SpartanBambooMatrixSystem::StaticNew() */

SpartanBambooMatrixSystem * SpartanBambooMatrixSystem::StaticNew(void)

{
  SpartanBambooMatrixSystem *this;
  
  this = ::operator_new(0x48);
  SpartanBambooMatrixSystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpartanBambooMatrixSystem::FindTarget(Sexy::Point const&) */

void __thiscall
SpartanBambooMatrixSystem::FindTarget(SpartanBambooMatrixSystem *this,Point *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_30);
  iVar5 = *(int *)(param_1 + 4);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets((Insets *)&local_20,*(int *)param_1,iVar5,iVar3 - *(int *)param_1,2);
  local_30 = local_20;
  uStack_28 = uStack_18;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar4 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares((Insets *)&local_20,uVar4,(Insets *)&local_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_20);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar1) break;
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
    if ((((this_00 != (Zombie *)0x0) && (cVar2 = RealObject::IsOnTeam(this_00,1), cVar2 == '\0')) &&
        (cVar2 = FUN_04e454fc(*(undefined4 *)(this_00 + 0xcc)), cVar2 == '\0')) &&
       ((iVar5 = Zombie::GetInvisibleState(this_00), iVar5 != 2 &&
        (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0')))) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* SpartanBambooMatrixSystem::~SpartanBambooMatrixSystem() */

void __thiscall
SpartanBambooMatrixSystem::~SpartanBambooMatrixSystem(SpartanBambooMatrixSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_069dea60;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x30));
  std::
  vector<SpartanBambooMatrixSystem::PlantMatrix,std::allocator<SpartanBambooMatrixSystem::PlantMatrix>>
  ::~vector((vector<SpartanBambooMatrixSystem::PlantMatrix,std::allocator<SpartanBambooMatrixSystem::PlantMatrix>>
             *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* SpartanBambooMatrixSystem::~SpartanBambooMatrixSystem() */

void __thiscall
SpartanBambooMatrixSystem::~SpartanBambooMatrixSystem(SpartanBambooMatrixSystem *this)

{
  ~SpartanBambooMatrixSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpartanBambooMatrixSystem::ConfirmZombieTarget(Sexy::Point const&) */

void SpartanBambooMatrixSystem::ConfirmZombieTarget(Point *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *in_x1;
  Point *in_x8;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(in_x8,-1,-1);
  iVar8 = 0;
  uVar10 = 0;
  uVar9 = 0;
  Sexy::Point::Point((Point *)&local_40,-1,-1);
  while( true ) {
    iVar7 = 0;
    this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)(param_1 + 0x30);
    while( true ) {
      iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
      if ((iVar2 <= iVar7) ||
         (iVar2 = *in_x1, iVar3 = BoardConstants::NUMBER_OF_COLUMNS(), iVar3 <= iVar7 + iVar2))
      break;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      EntityFinder::GetEntitiesAtGridSquare
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,2,iVar7 + *in_x1,
                 iVar8 + in_x1[1]);
      uVar4 = FUN_04e43a20(local_20,local_18);
      if ((ulong)(long)(int)uVar9 < uVar4) {
        Sexy::Point::Point((Point *)&local_38,iVar7 + *in_x1,iVar8 + in_x1[1]);
        if ((int)uVar10 < (int)uVar4) {
          uVar10 = uVar4 & 0xffffffff;
          local_40 = local_38;
          local_3c = local_34;
        }
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this);
        uVar6 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this);
        local_30 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                             (uVar5,uVar6,(Point *)&local_38);
        local_28 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this);
        bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_30,(__normal_iterator *)&local_28)
        ;
        if (bVar1) {
          uVar9 = uVar4 & 0xffffffff;
          *(undefined4 *)in_x8 = local_38;
          *(undefined4 *)(in_x8 + 4) = local_34;
        }
      }
      iVar7 = iVar7 + 1;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    }
    if (iVar8 != 0) break;
    iVar8 = 1;
  }
  if ((0 < (int)uVar10) && ((int)uVar9 == 0)) {
    *(undefined4 *)in_x8 = local_40;
    *(undefined4 *)(in_x8 + 4) = local_3c;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpartanBambooMatrixSystem::AddMatrix(std::vector<Sexy::RtWeakPtr<Plant>,
   std::allocator<Sexy::RtWeakPtr<Plant> > >, Sexy::Point const&, Sexy::SexyVector3 const&, float)
    */

void __thiscall
SpartanBambooMatrixSystem::AddMatrix
          (undefined4 param_1,SpartanBambooMatrixSystem *this,vector *param_3,undefined8 *param_4,
          SexyVector3 *param_5)

{
  long lVar1;
  int iVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  PlantMatrix aPStack_60 [24];
  float local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  long local_30;
  undefined4 local_28;
  RtWeakPtr<PowerPropertySheet> aRStack_20 [8];
  SexyVector3 aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_04e43a00(*(undefined8 *)param_3,*(undefined8 *)(param_3 + 8));
  if (lVar1 == 4) {
    PlantMatrix::PlantMatrix(aPStack_60);
    std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::operator=
              ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)aPStack_60,
               param_3);
    local_48 = (float)PVZ_T();
    local_38 = 0;
    local_44 = *(undefined4 *)(this + 0x28);
    local_40 = *param_4;
    local_48 = local_48 + 3.0;
    fVar3 = (float)PVZ_EOT();
    local_30 = (long)fVar3;
    Sexy::SexyVector3::operator=(aSStack_18,param_5);
    local_28 = param_1;
    PlayMatrixEffect((SexyVector3 *)this);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_20,(RtWeakPtr *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    std::
    vector<SpartanBambooMatrixSystem::PlantMatrix,std::allocator<SpartanBambooMatrixSystem::PlantMatrix>>
    ::push_back((vector<SpartanBambooMatrixSystem::PlantMatrix,std::allocator<SpartanBambooMatrixSystem::PlantMatrix>>
                 *)(this + 0x10),aPStack_60);
    iVar2 = *(int *)(this + 0x28);
    *(int *)(this + 0x28) = iVar2 + 1;
    PlantMatrix::~PlantMatrix(aPStack_60);
  }
  else {
    iVar2 = -1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpartanBambooMatrixSystem::againApplyMatrix(std::vector<Sexy::RtWeakPtr<Plant>,
   std::allocator<Sexy::RtWeakPtr<Plant> > >, Sexy::RtWeakPtr<Plant> const&) */

void __thiscall
SpartanBambooMatrixSystem::againApplyMatrix
          (undefined8 param_1,undefined8 *param_2,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  RtMixedPtrBase *this;
  RtWeakPtrBase *pRVar4;
  long lVar5;
  PlantSpartanBamboo *this_00;
  ulong uVar6;
  undefined8 uVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar7 = *param_2;
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_04e43a00(uVar7,param_2[1]);
  if (lVar2 == 3) {
    uVar6 = 0;
    uVar3 = 3;
    while ((uVar6 < uVar3 && (uVar3 == 3))) {
      this = (RtMixedPtrBase *)FUN_04e43a2c(uVar7,uVar6);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
      if (cVar1 != '\0') {
        pRVar4 = (RtWeakPtrBase *)FUN_04e43a2c(*param_2,uVar6);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar4);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
        if (lVar2 == lVar5) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        }
        else {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          nop();
          if ((this_00 != (PlantSpartanBamboo *)0x0) && (this_00[0x5d] == (PlantSpartanBamboo)0x0))
          {
            PlantSpartanBamboo::CanMatrixCondition(this_00);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        }
      }
      uVar7 = *param_2;
      uVar6 = uVar6 + 1;
      uVar3 = FUN_04e43a00(uVar7,param_2[1]);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpartanBambooMatrixSystem::RemoveMatrix(int, Sexy::RtWeakPtr<Plant> const&) */

void __thiscall
SpartanBambooMatrixSystem::RemoveMatrix
          (SpartanBambooMatrixSystem *this,int param_1,RtWeakPtr *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  RtWeakPtrBase *pRVar6;
  PlantSpartanBamboo *this_01;
  long lVar7;
  RtMixedPtrBase *this_02;
  StandaloneEffect *this_03;
  Effect_PopAnim *pEVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((-1 < param_1) &&
     (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_2), cVar1 != '\0')) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x10);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    while( true ) {
      local_20[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)local_20);
      if (!bVar2) break;
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      if (param_1 == *(int *)(lVar3 + 0x1c)) {
        uVar9 = 0;
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
        puVar4 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
        uVar10 = *puVar4;
        uVar5 = FUN_04e43a00(uVar10,puVar4[1]);
        if (uVar5 == 4) {
          for (; uVar9 < uVar5; uVar9 = uVar9 + 1) {
            this_02 = (RtMixedPtrBase *)FUN_04e43a18(uVar10,uVar9);
            cVar1 = Sexy::RtMixedPtrBase::IsValid(this_02);
            if (cVar1 != '\0') {
              puVar4 = (undefined8 *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
              pRVar6 = (RtWeakPtrBase *)FUN_04e43a18(*puVar4,uVar9);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)local_20,pRVar6);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
              nop();
              if (this_01 != (PlantSpartanBamboo *)0x0) {
                PlantSpartanBamboo::Cancelmatrixbuff(this_01);
                lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
                lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
                if (lVar3 != lVar7) {
                  PlantSpartanBamboo::SetBattLearrayState(this_01,false);
                  FUN_04e439d8(this_01 + 0x60,0xffffffff);
                  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::
                  push_back((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *
                            )avStack_38,(RtWeakPtr *)local_20);
                }
              }
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
            }
            puVar4 = (undefined8 *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
            uVar10 = *puVar4;
            uVar5 = FUN_04e43a00(uVar10,puVar4[1]);
          }
          cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(puVar4 + 8));
          if (cVar1 != '\0') {
            lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
            this_03 = (StandaloneEffect *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0x40));
            StandaloneEffect::SetKeepAlive(this_03,false);
            lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
            pEVar8 = (Effect_PopAnim *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0x40));
            std::string::string((string *)local_20,"idle03");
            Effect_PopAnim::PlaySingleAnimation
                      (pEVar8,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                               *)local_20,0);
            std::string::~string((string *)local_20);
            nop();
          }
        }
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_20,(__normal_iterator *)&local_40);
        std::
        vector<SpartanBambooMatrixSystem::PlantMatrix,std::allocator<SpartanBambooMatrixSystem::PlantMatrix>>
        ::erase((vector<SpartanBambooMatrixSystem::PlantMatrix,std::allocator<SpartanBambooMatrixSystem::PlantMatrix>>
                 *)this_00,local_20[0]);
        std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::vector
                  ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)local_20
                   ,(vector *)avStack_38);
        againApplyMatrix(this,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                               *)local_20,param_2);
        std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
                  ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)local_20
                  );
        std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
                  ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                   avStack_38);
        break;
      }
      FUN_04e45b60((exception_ptr *)&local_40);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpartanBambooMatrixSystem::AttackMatrix(SpartanBambooMatrixSystem::PlantMatrix&) */

void __thiscall
SpartanBambooMatrixSystem::AttackMatrix(SpartanBambooMatrixSystem *this,PlantMatrix *param_1)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  RtMixedPtrBase *this_00;
  ulong uVar4;
  RtWeakPtrBase *pRVar5;
  PlantSpartanBamboo *this_01;
  Plant *this_02;
  long extraout_x0;
  ulong uVar6;
  undefined8 uVar7;
  Board *this_03;
  float fVar8;
  GridItemspear *pGVar9;
  undefined4 uVar10;
  int local_28;
  int local_24;
  Point aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = FindTarget(this,(Point *)(param_1 + 0x20));
  if (cVar2 != '\0') {
    ConfirmZombieTarget((Point *)this);
    Sexy::Point::Point(aPStack_20,-1,-1);
    cVar2 = Sexy::TPoint<int>::operator==((TPoint<int> *)&local_28,(TPoint *)aPStack_20);
    if (cVar2 == '\0') {
      uVar6 = 0;
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x30),(Point *)&local_28
                );
      uVar7 = *(undefined8 *)param_1;
      lVar3 = FUN_04e43a00(uVar7,*(undefined8 *)(param_1 + 8));
      if (lVar3 != 0) {
        do {
          this_00 = (RtMixedPtrBase *)FUN_04e43a18(uVar7,uVar6);
          cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
          if (cVar2 != '\0') {
            pRVar5 = (RtWeakPtrBase *)FUN_04e43a18(*(undefined8 *)param_1,uVar6);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aPStack_20,pRVar5);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_20);
            nop();
            if (this_01 != (PlantSpartanBamboo *)0x0) {
              cVar2 = (**(code **)(*(long *)this_01 + 0x180))();
              if (cVar2 == '\0') {
                FUN_04e439e4(this_01 + 0x58,*(undefined4 *)(param_1 + 0x28));
                FUN_04e439ec(this_01 + 0x5c,0);
                PlantSpartanBamboo::MatrixAttack(this_01);
              }
              this_02 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                           ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_20);
              Plant::SetInvincible(this_02,true,false,1.0);
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_20);
          }
          uVar6 = uVar6 + 1;
          uVar7 = *(undefined8 *)param_1;
          uVar4 = FUN_04e43a00(uVar7,*(undefined8 *)(param_1 + 8));
        } while (uVar6 < uVar4);
      }
      lVar3 = FUN_04e478dc(local_28,local_24);
      if (lVar3 == 0) {
        this_03 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string((string *)aPStack_20,"spear_rain");
        Board::AddGridItem(this_03,(string *)aPStack_20,local_28,local_24,1);
        std::string::~string((string *)aPStack_20);
        nop();
        nop();
        lVar3 = extraout_x0;
      }
      fVar8 = (float)GetAttackFrequency(this,*(int *)(param_1 + 0x28));
      uVar1 = *(undefined4 *)(param_1 + 0x1c);
      pGVar9 = (GridItemspear *)GetAttackSpeed(fVar8);
      uVar10 = *(undefined4 *)(param_1 + 0x38);
      std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::vector
                ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)aPStack_20
                 ,(vector *)param_1);
      GridItemspear::SetPlantMatrix(pGVar9,uVar10,lVar3,uVar1,(int)fVar8,aPStack_20);
      std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
                ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)aPStack_20
                );
    }
  }
  fVar8 = (float)PVZ_T();
  *(float *)(param_1 + 0x18) = fVar8 + 6.0;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpartanBambooMatrixSystem::Update() */

void __thiscall SpartanBambooMatrixSystem::Update(SpartanBambooMatrixSystem *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  vector *pvVar4;
  long lVar5;
  PlantMatrix *pPVar6;
  float fVar7;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  while( true ) {
    local_20[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x10));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)local_20);
    if (!bVar2) break;
    fVar7 = (float)PVZ_T();
    pvVar4 = (vector *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    if ((*(float *)(pvVar4 + 0x18) < fVar7) &&
       (lVar5 = FUN_04e43a00(*(undefined8 *)pvVar4,*(undefined8 *)(pvVar4 + 8)), lVar5 == 4)) {
      std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::vector
                ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)local_20,
                 pvVar4);
      cVar3 = HasPlantsCondition(this,(vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>
                                       *)local_20);
      std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
                ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)local_20);
      if (cVar3 == '\0') {
        pPVar6 = (PlantMatrix *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
        AttackMatrix(this,pPVar6);
      }
      else {
        lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
        fVar7 = (float)PVZ_T();
        *(float *)(lVar5 + 0x18) = fVar7 + 6.0;
      }
    }
    fVar7 = (float)PVZ_T();
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    if ((float)*(long *)(lVar5 + 0x30) < fVar7) {
      iVar1 = *(int *)(lVar5 + 0x28);
      if (iVar1 == 1) {
        *(undefined4 *)(lVar5 + 0x28) = 2;
        lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
        fVar7 = (float)PVZ_T();
        *(long *)(lVar5 + 0x30) = (long)(fVar7 + 5.0);
        lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
        iVar1 = *(int *)(lVar5 + 0x28);
      }
      if (iVar1 == 2) {
        *(undefined4 *)(lVar5 + 0x28) = 0;
      }
    }
    FUN_04e45b60((__normal_iterator *)&local_28);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x30));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpartanBambooMatrixSystem::SetBerserkerCondition(int, Sexy::RtWeakPtr<Plant> const&) */

void __thiscall
SpartanBambooMatrixSystem::SetBerserkerCondition
          (SpartanBambooMatrixSystem *this,int param_1,RtWeakPtr *param_2)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  RtMixedPtrBase *this_00;
  RtWeakPtrBase *pRVar6;
  long lVar7;
  PlantSpartanBamboo *this_01;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (-1 < param_1) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x10));
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x10));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (param_1 == *(int *)(lVar3 + 0x1c)) {
        *(undefined4 *)(lVar3 + 0x28) = 1;
        uVar8 = 0;
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        fVar10 = (float)PVZ_T();
        *(long *)(lVar3 + 0x30) = (long)(fVar10 + 5.0);
        while( true ) {
          puVar4 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          uVar9 = *puVar4;
          uVar5 = FUN_04e43a00(uVar9,puVar4[1]);
          if (uVar5 <= uVar8) break;
          this_00 = (RtMixedPtrBase *)FUN_04e43a18(uVar9,uVar8);
          cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
          if (cVar2 == '\0') {
            uVar8 = uVar8 + 1;
          }
          else {
            puVar4 = (undefined8 *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
            pRVar6 = (RtWeakPtrBase *)FUN_04e43a18(*puVar4,uVar8);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_10,pRVar6);
            lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
            if (lVar3 == lVar7) {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
              uVar8 = uVar8 + 1;
            }
            else {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
              nop();
              if (this_01 != (PlantSpartanBamboo *)0x0) {
                PlantSpartanBamboo::Matrixberserker(this_01);
              }
              uVar8 = uVar8 + 1;
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
            }
          }
        }
        break;
      }
      FUN_04e45b60();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

