// Class: PlantTwinSunflower


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTwinSunflower::StaticClassInit() */

void PlantTwinSunflower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantTwinSunflower");
    (*pcVar2)(plVar1,asStack_10,FUN_040786d8,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTwinSunflower::StaticGetClass() */

long * PlantTwinSunflower::StaticGetClass(void)

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
  uVar2 = PlantSunflower::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTwinSunflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTwinSunflower::GetClass() const */

long * PlantTwinSunflower::GetClass(void)

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
  uVar2 = PlantSunflower::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTwinSunflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTwinSunflower::PlantTwinSunflower() */

void __thiscall PlantTwinSunflower::PlantTwinSunflower(PlantTwinSunflower *this)

{
  PlantSunflower::PlantSunflower((PlantSunflower *)this);
  *(undefined ***)this = &PTR_GetClass_067c8bc0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  Sexy::Point::Point((Point *)(this + 0x38));
  return;
}


/* PlantTwinSunflower::StaticNew() */

PlantTwinSunflower * PlantTwinSunflower::StaticNew(void)

{
  PlantTwinSunflower *this;
  
  this = ::operator_new(0x40);
  PlantTwinSunflower(this);
  return this;
}


/* PlantTwinSunflower::~PlantTwinSunflower() */

void __thiscall PlantTwinSunflower::~PlantTwinSunflower(PlantTwinSunflower *this)

{
  *(undefined ***)this = &PTR_GetClass_067c8bc0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  PlantSunflower::~PlantSunflower((PlantSunflower *)this);
  return;
}


/* PlantTwinSunflower::~PlantTwinSunflower() */

void __thiscall PlantTwinSunflower::~PlantTwinSunflower(PlantTwinSunflower *this)

{
  ~PlantTwinSunflower(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTwinSunflower::Produce(PlantAction const&) */

void __thiscall PlantTwinSunflower::Produce(PlantTwinSunflower *this,PlantAction *param_1)

{
  char cVar1;
  PlantType *this_00;
  long lVar2;
  PlantAction *pPVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x1f0))();
  if (cVar1 != '\0') {
    Plant::GetType();
    this_00 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    cVar1 = PlantType::IsNewAvatarNewRare(this_00);
    if ((cVar1 == '\0') &&
       ((cVar1 = (**(code **)(*(long *)this + 0x180))(this), cVar1 == '\0' ||
        (cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10)), cVar1 == '\0')))) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      lVar2 = FUN_040794dc(*(undefined8 *)(this + 0x10));
      if (fVar4 < *(float *)(lVar2 + 700)) {
        Plant::GetProps();
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        pPVar3 = (PlantAction *)FUN_040784c8(*(undefined8 *)(lVar2 + 0x70),0);
        PlantSunflower::ProduceCoin((PlantSunflower *)this,pPVar3);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
    }
    (**(code **)(*(long *)this + 0x540))(aRStack_10,this);
    PlantSunflower::ProduceSun((PlantSunflower *)this,param_1,(string *)aRStack_10);
    std::string::~string((string *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTwinSunflower::ProduceSun(PlantAction const&) */

void PlantTwinSunflower::ProduceSun(PlantAction *param_1)

{
  long lVar1;
  PlantAction *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pPVar2 = (PlantAction *)FUN_040784c8(*(undefined8 *)(lVar1 + 0x70),0);
  Produce((PlantTwinSunflower *)param_1,pPVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Plant::GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pPVar2 = (PlantAction *)FUN_040784c8(*(undefined8 *)(lVar1 + 0x70),1);
  Produce((PlantTwinSunflower *)param_1,pPVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTwinSunflower::Initialize() */

void __thiscall PlantTwinSunflower::Initialize(PlantTwinSunflower *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  PlantAction *pPVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantSunflower::Initialize((PlantSunflower *)this);
  cVar1 = Board::IsSunSpawningSuppressed(*(Board **)(gLawnApp + 0x9f0));
  if ((cVar1 == '\0') && (cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0)), cVar1 != '\0')) {
    uVar5 = *(undefined8 *)(this + 0x10);
    iVar2 = FUN_040784b0(uVar5);
    if (iVar2 == 2) {
      Plant::GetProps();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      pPVar4 = (PlantAction *)FUN_040784c8(*(undefined8 *)(lVar3 + 0x70),0);
      Produce(this,pPVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
    else if (2 < iVar2) {
      iVar2 = 1;
      while( true ) {
        lVar3 = FUN_040794dc(uVar5);
        pPVar4 = (PlantAction *)FUN_040784c8(*(undefined8 *)(lVar3 + 0x70),0);
        Produce(this,pPVar4);
        if (iVar2 == 3) break;
        while( true ) {
          iVar2 = iVar2 + 1;
          uVar5 = *(undefined8 *)(this + 0x10);
          if (iVar2 != 2) break;
          lVar3 = FUN_040794dc(uVar5);
          pPVar4 = (PlantAction *)FUN_040784c8(*(undefined8 *)(lVar3 + 0x70),1);
          Produce(this,pPVar4);
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantTwinSunflower::LaunchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float) */

void __thiscall
PlantTwinSunflower::LaunchProjectileAt
          (PlantTwinSunflower *this,Projectile *param_1,SexyVector3 *param_2,float param_3,
          float param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_040794dc(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar1 + 0x2d4);
  lVar1 = FUN_040794dc(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * *(float *)(lVar1 + 0x2d4));
  lVar1 = FUN_040794dc(*(undefined8 *)(this + 0x10));
  fVar4 = *(float *)(lVar1 + 0x2d0);
  lVar1 = FUN_040794dc(*(undefined8 *)(this + 0x10));
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * *(float *)(lVar1 + 0x2d0));
  Projectile::LaunchAt(param_1,param_2,fVar2 + fVar5,fVar3 + fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTwinSunflower::UpdateActions() */

void __thiscall PlantTwinSunflower::UpdateActions(PlantTwinSunflower *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  string *psVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  Board *this_00;
  float fVar10;
  float fVar11;
  undefined8 local_2738;
  undefined8 local_2730 [3];
  random_device arStack_2718 [5000];
  undefined1 auStack_1390 [5000];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(*(long *)(this + 0x10) + 200) != 4) ||
     (fVar10 = (float)PVZ_T(), fVar10 <= *(float *)(*(long *)(this + 0x10) + 300)))
  goto LAB_04079cb0;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  iVar3 = FUN_040784c0(*(undefined4 *)(this_00 + 0x104));
  if (iVar3 == 4) {
    psVar7 = (string *)Board::GetLevel(this_00);
    bVar2 = std::operator==(psVar7,"egypt1");
    if (!bVar2) {
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      goto LAB_04079d1c;
    }
    plVar5 = (long *)FUN_0407992c(*(undefined8 *)(this + 0x10));
    (**(code **)(*plVar5 + 600))();
  }
  else {
LAB_04079d1c:
    cVar1 = Board::IsPlaying(this_00);
    if ((cVar1 != '\0') && (cVar1 = Board::IsSunSpawningSuppressed(this_00), cVar1 == '\0')) {
      uVar9 = *(undefined8 *)(this + 0x10);
      iVar3 = FUN_040784b0(uVar9);
      if (4 < iVar3) {
        lVar6 = FUN_040794dc(uVar9);
        fVar11 = *(float *)(lVar6 + 0x2d8);
        fVar10 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
        if (fVar10 < fVar11) {
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_2730);
          EntityFinder::GetEntitiesOnBoard
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_2730,2);
          cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_2730);
          if (cVar1 == '\0') {
            std::string::string((string *)&local_2738,"default");
            std::random_device::random_device(arStack_2718,(string *)&local_2738);
            std::string::~string((string *)&local_2738);
            nop();
            uVar4 = std::random_device::operator()(arStack_2718);
            thunk_FUN_0345d478(auStack_1390,uVar4);
            uVar9 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)local_2730);
            uVar8 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)local_2730);
            std::
            shuffle<__gnu_cxx::__normal_iterator<Zombie**,std::vector<Zombie*,std::allocator<Zombie*>>>,std::mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>&>
                      (uVar9,uVar8,auStack_1390);
            FUN_040784d8(local_2730[0],0);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30),
                       (RtWeakPtrBase *)&local_2738);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_2738);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30))
            ;
            BoardEntity::CalcGridPosition();
            *(undefined8 *)(this + 0x38) = local_2738;
            lVar6 = FUN_040799b4(*(undefined8 *)(this + 0x10));
            FUN_040784b8(lVar6 + 0x3b8,1);
            std::random_device::~random_device(arStack_2718);
          }
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_2730);
        }
        uVar9 = *(undefined8 *)(this + 0x10);
      }
      plVar5 = (long *)FUN_0407992c(uVar9);
      (**(code **)(*plVar5 + 600))();
      lVar6 = FUN_040799b4(*(undefined8 *)(this + 0x10));
      FUN_040784b8(lVar6 + 0x3b8,0);
    }
  }
  Plant::ResetLaunchTimer(*(Plant **)(this + 0x10),false);
LAB_04079cb0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTwinSunflower::OnAnimCommand(std::string const&, std::string const&) */

void PlantTwinSunflower::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  PlantType *this;
  Projectile *pPVar7;
  RtObject *this_00;
  undefined8 uVar8;
  undefined8 uVar9;
  RtWeakPtr *this_01;
  Plant *pPVar10;
  RtWeakPtr<Sexy::SoundResource> aRStack_2750 [8];
  undefined8 local_2748;
  undefined8 local_2740 [2];
  undefined8 local_2730 [3];
  random_device arStack_2718 [5000];
  undefined1 auStack_1390 [5000];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_action2");
  if (bVar1) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_2730);
    EntityFinder::GetEntitiesOnBoard
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_2730,2);
    cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_2730);
    if (cVar2 == '\0') {
      std::string::string((string *)local_2740,"default");
      std::random_device::random_device(arStack_2718,(string *)local_2740);
      std::string::~string((string *)local_2740);
      nop();
      uVar6 = std::random_device::operator()(arStack_2718);
      thunk_FUN_0345d478(auStack_1390,uVar6);
      uVar8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)local_2730);
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)local_2730);
      std::
      shuffle<__gnu_cxx::__normal_iterator<Zombie**,std::vector<Zombie*,std::allocator<Zombie*>>>,std::mersenne_twister_engine<unsigned_long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>&>
                (uVar8,uVar9,auStack_1390);
      FUN_040784d8(local_2730[0],0);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x30),
                 (RtWeakPtrBase *)local_2740);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_2740);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x30));
      BoardEntity::CalcGridPosition();
      *(undefined8 *)(param_1 + 0x38) = local_2740[0];
      std::random_device::~random_device(arStack_2718);
    }
    this_01 = (RtWeakPtr *)(param_1 + 0x30);
    Plant::GetType();
    this = (PlantType *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_2740);
    cVar2 = PlantType::IsNewAvatarNewRare(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_2740);
    uVar6 = 2;
    if (cVar2 != '\0') {
      uVar6 = 3;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = uVar6;
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar3) {
      this_00 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      Sexy::RtObject::Cast<Zombie>(this_00);
      ToolPacketData::GetProps();
    }
    else {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_2740);
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_2750,(RtWeakPtrBase *)local_2740);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_2740);
    pPVar10 = *(Plant **)(param_1 + 0x10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_2740,(RtWeakPtrBase *)aRStack_2750);
    pPVar7 = (Projectile *)
             Plant::Fire(pPVar10,(RtWeakPtr<Sexy::ResourceInfo> *)local_2740,
                         *(undefined4 *)(param_1 + 0x3c),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_2740);
    iVar4 = BoardTransforms::GridToBoardSpaceX(*(int *)(param_1 + 0x38));
    iVar5 = BoardTransforms::GridToBoardSpaceY(*(int *)(param_1 + 0x3c));
    EATextSquish::Vec3::Vec3((Vec3 *)local_2740,(float)iVar4,(float)iVar5,0.0);
    LaunchProjectileAt((PlantTwinSunflower *)param_1,pPVar7,(SexyVector3 *)local_2740,_FUN_0407a1f0,
                       _FUN_0407a1f0);
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
    Sexy::Point::Point((Point *)&local_2748,-1,-1);
    *(undefined8 *)(param_1 + 0x38) = local_2748;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_2750);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_2730);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTwinSunflower::DoSpecial(int) */

void PlantTwinSunflower::DoSpecial(int param_1)

{
  PlantTwinSunflower *this;
  long lVar1;
  PlantAction *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this = (PlantTwinSunflower *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (0 < *(int *)(this + 0x28)) {
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + -1;
    Plant::GetProps();
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pPVar2 = (PlantAction *)FUN_040784c8(*(undefined8 *)(lVar1 + 0x70),0);
    Produce(this,pPVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (0 < *(int *)(this + 0x28)) {
      *(int *)(this + 0x28) = *(int *)(this + 0x28) + -1;
      Plant::GetProps();
      lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      pPVar2 = (PlantAction *)FUN_040784c8(*(undefined8 *)(lVar1 + 0x70),1);
      Produce(this,pPVar2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
  }
  if (this[0x2c] != (PlantTwinSunflower)0x0) {
    MessageRouter::Post<BoardEntity*,Plant*>
              ((MessageRouter *)gMessageRouter,Message::SunProductionTriggered,
               *(Plant **)(this + 0x10));
    this[0x2c] = (PlantTwinSunflower)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTwinSunflower::getCollectableTypeName() */

void PlantTwinSunflower::getCollectableTypeName(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long in_x0;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  PlantType *this_00;
  undefined8 uVar5;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Plant::GetType();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
  NewAvatar::GetListByPlantName((string *)(lVar4 + 8),(vector *)avStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar1) {
      Plant::GetType();
      this_00 = (PlantType *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28)
      ;
      cVar2 = PlantType::IsNewAvatarNewRare(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      if (cVar2 == '\0') {
        uVar5 = *(undefined8 *)(in_x0 + 0x10);
LAB_0407ab60:
        FUN_040794dc(uVar5);
        thunk_FUN_05475e00();
      }
      else {
        FUN_040794dc(*(undefined8 *)(in_x0 + 0x10));
        thunk_FUN_05475e00();
      }
LAB_0407ab70:
      std::vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>>::
      ~vector((vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>>
               *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this = (RtWeakPtr<Sexy::ResourceInfo> *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    lVar4 = *(long *)(in_x0 + 0x10);
    iVar3 = FUN_040784a8(*(undefined4 *)(lVar4 + 0x294));
    if (iVar3 == 0) {
      FUN_040794dc(lVar4);
      thunk_FUN_05475e00();
      goto LAB_0407ab70;
    }
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    iVar3 = FUN_040784a8(*(undefined4 *)(*(long *)(in_x0 + 0x10) + 0x294));
    if (*(int *)(lVar4 + 0x10) == iVar3) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      uVar5 = *(undefined8 *)(in_x0 + 0x10);
      if (*(int *)(lVar4 + 0x60) != 1) goto LAB_0407ab60;
      FUN_040794dc(uVar5);
      thunk_FUN_05475e00();
      goto LAB_0407ab70;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  } while( true );
}

