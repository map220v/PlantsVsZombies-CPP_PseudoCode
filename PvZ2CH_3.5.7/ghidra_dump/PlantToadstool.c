// Class: PlantToadstool


/* PlantToadstool::Draw(Sexy::Graphics*) */

void PlantToadstool::Draw(Graphics *param_1)

{
  Plant::internalPlantDraw(*(Graphics **)(param_1 + 0x10));
  return;
}


/* PlantToadstool::findEntitiesInAttackRect(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&, Sexy::TRect<int>&, PlantWeapon, BoardEntityTypeFlag) const */

void __thiscall
PlantToadstool::findEntitiesInAttackRect
          (PlantToadstool *this,undefined8 param_1,undefined8 param_2,int param_4,undefined4 param_5
          )

{
  undefined4 uVar1;
  
  if (param_4 != 1) {
    uVar1 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    EntityFinder::GetEntitiesTouchingRectangle(param_1,param_5,param_2,uVar1,uVar1);
    return;
  }
  EntityFinder::GetEntitiesTouchingRectangle(param_1,param_5,param_2,0xffffffff,0xffffffff);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantToadstool::produceSun(int) */

void __thiscall PlantToadstool::produceSun(PlantToadstool *this,int param_1)

{
  char cVar1;
  Collectable *this_00;
  undefined8 *puVar2;
  string asStack_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  float local_28 [4];
  Vec3 aVStack_18 [4];
  int local_14;
  Collectable *local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x1f0))();
  if ((cVar1 != '\0') && (0 < param_1)) {
    do {
      Set8BytesTo0(asStack_40);
      if (param_1 < 100) {
        if (param_1 < 0x4b) {
          if (0x31 < param_1) goto LAB_0401dfc8;
          if (param_1 < 0x19) {
            param_1 = param_1 + -5;
            std::string::append(asStack_40,"sun_small",(size_t)this_00);
          }
          else {
            param_1 = param_1 + -0x19;
            std::string::append(asStack_40,"sun_medium",(size_t)this_00);
          }
        }
        else {
          param_1 = param_1 + -0x4b;
          std::string::append(asStack_40,"sun_large",(size_t)this_00);
        }
      }
      else {
LAB_0401dfc8:
        param_1 = param_1 + -0x32;
        std::string::append(asStack_40,"sun",(size_t)this_00);
      }
      this_00 = (Collectable *)Board::AddCollectable(*(string **)(gLawnApp + 0x9f0));
      puVar2 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               **)(this + 0x10));
      local_38 = *puVar2;
      local_30 = *(undefined4 *)(puVar2 + 1);
      DVec3::DVec3((DVec3 *)local_28);
      local_28[0] = (float)PlantFramework::Rand((PlantFramework *)this,80.0);
      local_28[0] = local_28[0] - 40.0;
      local_28[1] = 5.0;
      local_28[2] = (float)PlantFramework::Rand((PlantFramework *)this,170.0);
      local_28[2] = local_28[2] + 170.0;
      (**(code **)(**(long **)(this + 0x10) + 0xd0))(aVStack_18,*(long **)(this + 0x10));
      if (3 < local_14) {
        local_38 = CONCAT44(local_38._4_4_ - 10.0,(undefined4)local_38);
        local_28[1] = 0.0;
      }
      (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_38);
      EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,-600.0);
      Collectable::SetMotionNewtonian
                (this_00,(SexyVector3 *)local_28,(SexyVector3 *)aVStack_18,true);
      Collectable::StartExpirationTimerAfterMotion(this_00);
      MessageRouter::Broadcast<CollectableSun*,CollectableSun*>
                ((MessageRouter *)gMessageRouter,Message::SunProducedByPlant,
                 (CollectableSun *)this_00);
      std::string::~string(asStack_40);
    } while (0 < param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantToadstool::CanEndPlantfood() */

bool __thiscall PlantToadstool::CanEndPlantfood(PlantToadstool *this)

{
  return 8 < *(int *)(this + 0x28) - 8U;
}


/* PlantToadstool::CanBeWatered() */

undefined8 __thiscall PlantToadstool::CanBeWatered(PlantToadstool *this)

{
  undefined8 uVar1;
  
  if (*(int *)(this + 0x28) - 2U < 3) {
    return 0;
  }
  uVar1 = PlantFramework::CanBeWatered((PlantFramework *)this);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantToadstool::StaticClassInit() */

void PlantToadstool::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantToadstool");
    (*pcVar2)(plVar1,asStack_10,FUN_0412d1a0,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantToadstool::StaticGetClass() */

long * PlantToadstool::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantToadstool",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantToadstool::GetClass() const */

long * PlantToadstool::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantToadstool",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantToadstool::getTongueOrigin() const */

undefined4 __thiscall PlantToadstool::getTongueOrigin(PlantToadstool *this)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(this + 0x10);
  uVar2 = FUN_04129d8c(*(undefined4 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x1c),
                       *(undefined4 *)(lVar1 + 0x20));
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantToadstool::canZombieBeTargeted(Zombie const*) const */

void __thiscall PlantToadstool::canZombieBeTargeted(PlantToadstool *this,Zombie *param_1)

{
  char cVar1;
  undefined1 uVar2;
  code *pcVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = RealObject::IsOnOpposingTeam((RealObject *)param_1,*(RealObject **)(this + 0x10));
  if ((((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')
       ) && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0')) &&
     (cVar1 = Zombie::IsIgnoringAllDamage(param_1), cVar1 == '\0')) {
    cVar1 = Zombie::IsControlled(param_1);
    if ((cVar1 == '\0') && (cVar1 = Zombie::CanTakeFatalDamage(param_1), cVar1 != '\0')) {
      pcVar3 = *(code **)(*(long *)param_1 + 0x3d0);
      Plant::GetType();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      uVar2 = (*pcVar3)(param_1,aRStack_10,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      goto LAB_0412a39c;
    }
  }
  uVar2 = 0;
LAB_0412a39c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PlantToadstool::canZombieBeMoved(Zombie const*) const */

byte __thiscall PlantToadstool::canZombieBeMoved(PlantToadstool *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = canZombieBeTargeted(this,param_1);
  if ((cVar1 != '\0') && (cVar1 = Zombie::CanBeLaunchedByPlants(param_1), cVar1 != '\0')) {
    bVar2 = Zombie::IsControlled(param_1);
    return bVar2 ^ 1;
  }
  return 0;
}


/* PlantToadstool::onDestroy() */

void __thiscall PlantToadstool::onDestroy(PlantToadstool *this)

{
  char cVar1;
  RtObject *this_00;
  Zombie *this_01;
  
  PlantFramework::onDestroy((PlantFramework *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x30));
  if (cVar1 != '\0') {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
    this_01 = Sexy::RtObject::Cast<Zombie>(this_00);
    if ((this_01 != (Zombie *)0x0) && (cVar1 = Zombie::IsControlled(this_01), cVar1 != '\0')) {
      Zombie::SetIsControlled(this_01,false);
      return;
    }
  }
  return;
}


/* PlantToadstool::PlantToadstool() */

void __thiscall PlantToadstool::PlantToadstool(PlantToadstool *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067ead10;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x60));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x68));
  return;
}


/* PlantToadstool::StaticNew() */

PlantToadstool * PlantToadstool::StaticNew(void)

{
  PlantToadstool *this;
  
  this = ::operator_new(0x70);
  PlantToadstool(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0412bbd4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantToadstool::Initialize() */

void __thiscall PlantToadstool::Initialize(PlantToadstool *this)

{
  int extraout_w0;
  ComponentRunner *pCVar1;
  undefined8 uVar2;
  ComponentVisualStretcherProps *pCVar3;
  undefined4 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::MakeRenderOrder(0x64960,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1,0);
  *(undefined4 *)(this + 0x28) = 0;
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x50) = uVar4;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  pCVar1 = (ComponentRunner *)BoardEntity::GetComponentRunner(*(BoardEntity **)(this + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  std::string::string(asStack_18,"normalTongueStretcher");
  ComponentRunner::Add<ComponentVisualStretcher>(pCVar1,aRStack_20,asStack_18,pCVar1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x60),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  pCVar1 = (ComponentRunner *)BoardEntity::GetComponentRunner(*(BoardEntity **)(this + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  std::string::string(asStack_18,"plantfoodTongueStretcher");
  ComponentRunner::Add<ComponentVisualStretcher>(pCVar1,aRStack_20,asStack_18,pCVar1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x68),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  PlantFramework::Initialize((PlantFramework *)this);
  uVar2 = *(undefined8 *)(this + 0x10);
  FUN_0412ba8c(uVar2);
  extraout_w0 = (int)uVar2;
  pCVar3 = (ComponentVisualStretcherProps *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  ComponentVisualStretcher::Initialize(pCVar3,extraout_w0 + 0x2e8);
  pCVar3 = (ComponentVisualStretcherProps *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  ComponentVisualStretcher::Initialize(pCVar3,extraout_w0 + 0x368);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantToadstool::getTongueRange(PlantWeapon) const */

undefined4 __thiscall PlantToadstool::getTongueRange(PlantToadstool *this,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_0412ba8c(*(undefined8 *)(this + 0x10));
  iVar1 = FUN_04129d54(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
  if (param_2 == 1) {
    if (2 < iVar1) {
      return *(undefined4 *)(lVar2 + 0x3d4);
    }
    return *(undefined4 *)(lVar2 + 0x3d0);
  }
  if (iVar1 < 3) {
    return *(undefined4 *)(lVar2 + 0x348);
  }
  return *(undefined4 *)(lVar2 + 0x34c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantToadstool::getPlantAttackRect(PlantWeapon) */

void PlantToadstool::getPlantAttackRect(Insets *param_1,PlantToadstool *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(param_2 + 0x10));
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  fVar7 = (float)iVar2 - (float)iVar1;
  local_10 = fVar7;
  local_c = (float)getTongueRange(param_2,param_3);
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  if (param_3 == 0) {
    fVar9 = 1.0;
    iVar2 = SharkMinion::getRow(*(SharkMinion **)(param_2 + 0x10));
    fVar8 = (float)iVar2;
    pfVar6 = eastl::min_alt<float>(&local_c,&local_10);
    fVar7 = *pfVar6;
  }
  else {
    fVar9 = (float)iVar2;
    fVar8 = 0.0;
  }
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Insets::Insets
            (param_1,(int)((float)iVar1 * (float)iVar2 + 200.0),(int)(fVar8 * (float)iVar3 + 160.0),
             (int)((float)iVar4 * fVar7),(int)((float)iVar5 * fVar9));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantToadstool::calculateDistanceToTarget(BoardEntity const*, PlantWeapon) const */

void PlantToadstool::calculateDistanceToTarget
               (undefined1 param_1_00 [16],undefined4 param_2,undefined4 param_3,
               PlantToadstool *param_1,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_5,undefined4 param_6)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_5 ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    lVar3 = *(long *)(param_1 + 0x10);
    fVar5 = (float)FUN_04129d8c(*(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),
                                *(undefined4 *)(lVar3 + 0x20));
    local_28 = CONCAT44(local_28._4_4_,800.0 - fVar5);
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    local_18 = (float)getTongueRange(param_1,param_6);
    local_18 = (float)iVar1 * local_18;
    pfVar4 = eastl::min_alt<float>(&local_18,(float *)&local_28);
    fVar5 = *pfVar4;
  }
  else {
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(param_1 + 0x10));
    local_38 = *puVar2;
    local_30 = *(undefined4 *)(puVar2 + 1);
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(param_5);
    local_28 = *puVar2;
    local_20 = *(undefined4 *)(puVar2 + 1);
    local_18 = (float)Sexy::SexyVector3::operator-
                                ((SexyVector3 *)&local_28,(SexyVector3 *)&local_38);
    local_14 = param_2;
    local_10 = param_3;
    fVar5 = (float)DVec3::getLength((DVec3 *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantToadstool::getTongueStretchDestination(PlantWeapon) const */

void PlantToadstool::getTongueStretchDestination
               (undefined1 param_1 [16],float param_2,PlantToadstool *param_3,undefined4 param_4)

{
  RtWeakPtr *this;
  char cVar1;
  int iVar2;
  int iVar3;
  ResourceInfo *pRVar4;
  long *plVar5;
  Insets *pIVar6;
  SharkMinion *this_00;
  float fVar7;
  float fVar8;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  this = (RtWeakPtr *)(param_3 + 0x30);
  local_8 = ___stack_chk_guard;
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
  fVar7 = (float)calculateDistanceToTarget(param_3,pRVar4,param_4);
  fVar8 = (float)getTongueOrigin(param_3);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,fVar7 + fVar8,param_2);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this);
  if (cVar1 != '\0') {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    pIVar6 = (Insets *)(**(code **)(*plVar5 + 0x178))();
    Sexy::Insets::Insets((Insets *)&local_18,pIVar6);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_20,(float)local_18 + (float)local_10 * 0.5,
               (float)local_14 + (float)local_c * 0.5);
    this_00 = (SharkMinion *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    iVar2 = SharkMinion::getRow(this_00);
    iVar3 = SharkMinion::getRow(*(SharkMinion **)(param_3 + 0x10));
    if (iVar2 == iVar3) {
      local_28 = CONCAT44(local_28._4_4_,local_20);
    }
    else {
      local_28 = CONCAT44(uStack_1c,local_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)local_28,(int)((ulong)local_28 >> 0x20));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantToadstool::getTongueRetractDestination(PlantWeapon) const */

void PlantToadstool::getTongueRetractDestination
               (undefined1 param_1 [16],undefined4 param_2,PlantToadstool *param_3,
               undefined4 param_4)

{
  ResourceInfo *pRVar1;
  float fVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_3 + 0x30));
  fVar2 = (float)calculateDistanceToTarget(param_3,pRVar1,param_4);
  local_30 = getTongueOrigin(param_3);
  local_2c = param_2;
  local_28 = getTongueStretchDestination(param_3,param_4);
  uStack_24 = param_2;
  local_10 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_28,(SexyVector2 *)&local_30);
  local_c = param_2;
  local_20 = Sexy::SexyVector2::Normalize((SexyVector2 *)&local_10);
  local_1c = param_2;
  local_18 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_20,fVar2);
  local_14 = param_2;
  local_10 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_18,0.66);
  local_c = param_2;
  local_28 = Sexy::SexyVector2::operator+((SexyVector2 *)&local_30,(SexyVector2 *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  uStack_24 = param_2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_28,param_2);
}


/* PlantToadstool::retractTongue(PlantWeapon) */

void PlantToadstool::retractTongue
               (undefined1 param_1 [16],undefined4 param_2,PlantToadstool *param_3,int param_4)

{
  char cVar1;
  undefined8 uVar2;
  ComponentVisualStretcher *this;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar3 = getTongueOrigin(param_3);
  uVar6 = param_2;
  uVar4 = getTongueRetractDestination(param_3,param_4);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_3 + 0x30));
  if (cVar1 == '\0') {
    uVar4 = uVar3;
    uVar6 = param_2;
  }
  if (param_4 == 1) {
    param_3 = param_3 + 0x68;
  }
  else {
    param_3 = param_3 + 0x60;
  }
  uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
  this = (ComponentVisualStretcher *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
  uVar5 = ComponentVisualStretcher::CurrentLength(this);
  ComponentVisualStretcher::RetractToFrom(uVar3,param_2,uVar4,uVar6,uVar5,uVar2);
  return;
}


/* PlantToadstool::onExit(ToadstoolState) */

void __thiscall PlantToadstool::onExit(PlantToadstool *this,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 3:
    uVar1 = PVZ_EOT();
    *(undefined4 *)(this + 0x50) = uVar1;
    retractTongue(this,0);
    return;
  case 6:
  case 8:
  case 0xd:
    uVar1 = PVZ_EOT();
    *(undefined4 *)(this + 0x50) = uVar1;
    break;
  case 10:
    uVar1 = PVZ_EOT();
    *(undefined4 *)(this + 0x50) = uVar1;
    retractTongue(this,1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantToadstool::isInRange(BoardEntity const*, PlantWeapon) const */

void __thiscall
PlantToadstool::isInRange(PlantToadstool *this,BoardEntity *param_1,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar5 = (float)getTongueRange(this,param_3);
  iVar1 = BoardEntity::CalcColumnPosition(param_1);
  iVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar3 = SharkMinion::getRow((SharkMinion *)param_1);
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  EATextSquish::Vec3::Vec3(aVStack_18,(float)iVar1 - (float)iVar2,(float)iVar3 - (float)iVar4,0.0);
  fVar6 = (float)DVec3::getLength((DVec3 *)aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar6 <= fVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantToadstool::searchForTarget(PlantWeapon, bool) */

void __thiscall
PlantToadstool::searchForTarget(PlantToadstool *this,undefined4 param_2,byte param_3)

{
  long lVar1;
  float *pfVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar3;
  UnchartedModePlantNumData aUStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  int local_28;
  int local_24;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0412ba8c(*(undefined8 *)(this + 0x10));
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)(lVar1 + 0x2d8));
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  local_28 = (int)((float)local_28 + *pfVar2);
  local_24 = (int)((float)local_24 + pfVar2[1]);
  if (param_3 == 0) {
    getPlantAttackRect(aIStack_18,this,param_2);
  }
  else {
    Sexy::Insets::Insets(aIStack_18,(Insets *)&local_28);
  }
  UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_38,1,0);
  (**(code **)(*(long *)this + 0xd8))(aRStack_30,this,aIStack_18,param_2,aUStack_38);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (this_00 ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    (**(code **)(*(long *)this + 0x100))(aRStack_30,this,aIStack_18,param_2);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  }
  if (param_3 < (this_00 !=
                (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)0x0)) {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_00);
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    if (*pfVar2 < *pfVar3) {
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantToadstool::tryToAcquireTargetForWeapon(PlantWeapon, bool) */

void PlantToadstool::tryToAcquireTargetForWeapon(long param_1)

{
  RtWeakPtrBase *this;
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this = (RtWeakPtrBase *)(param_1 + 0x30);
  local_8 = ___stack_chk_guard;
  lVar1 = searchForTarget();
  Sexy::RtWeakPtrBase::ClearId(this);
  if (lVar1 != 0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantToadstool::launchTongue(PlantWeapon) */

void PlantToadstool::launchTongue
               (undefined1 param_1 [16],undefined4 param_2,PlantToadstool *param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_3 + 0x30));
  if (cVar1 == '\0') {
    tryToAcquireTargetForWeapon(param_3,param_4);
  }
  uVar2 = getTongueOrigin(param_3);
  uVar4 = param_2;
  uVar3 = getTongueStretchDestination(param_3,param_4);
  if (param_4 == 1) {
    param_3 = param_3 + 0x68;
  }
  else {
    param_3 = param_3 + 0x60;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
  ComponentVisualStretcher::StretchFromTo(uVar2,param_2,uVar3,uVar4,0);
  return;
}


/* PlantToadstool::isTargetInCorrectRowAndColumn(BoardEntity const*) const */

byte __thiscall
PlantToadstool::isTargetInCorrectRowAndColumn(PlantToadstool *this,BoardEntity *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  lVar6 = FUN_0412ba8c(*(undefined8 *)(this + 0x10));
  iVar3 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  iVar4 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar1 = *(int *)(lVar6 + 0x2d0);
  iVar5 = BoardEntity::CalcColumnPosition(param_1);
  bVar2 = BoardEntity::IsInRow(param_1,iVar3);
  return bVar2 | iVar4 + iVar1 <= iVar5;
}


/* PlantToadstool::swallowZombiesAndProduceSun(int) */

void __thiscall PlantToadstool::swallowZombiesAndProduceSun(PlantToadstool *this,int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(this + 0x58);
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  fVar2 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
  produceSun(this,(int)(fVar2 + (float)(param_1 * iVar1)));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantToadstool::zombieIsBlacklisted(Zombie const*) const */

void __thiscall PlantToadstool::zombieIsBlacklisted(PlantToadstool *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar7;
  ZombieGargantuar *pZVar8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::HasFogImmune(param_1);
  if ((((cVar1 == '\0') && (cVar1 = Zombie::IsBerserk(param_1), cVar1 == '\0')) &&
      (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0')) {
    lVar4 = FUN_0412ba8c(*(undefined8 *)(this + 0x10));
    uVar5 = FUN_0412b088(*(undefined8 *)(lVar4 + 0x2b8));
    uVar6 = FUN_0412b0d8(*(undefined8 *)(lVar4 + 0x2c0));
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar5,uVar6,lVar7 + 8);
    local_10 = FUN_0412b0d8(*(undefined8 *)(lVar4 + 0x2c0));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (((!bVar2) &&
        (pZVar8 = Sexy::RtObject::Cast<ZombieGargantuar>((RtObject *)param_1),
        pZVar8 == (ZombieGargantuar *)0x0)) && (iVar3 = Zombie::GetSizeType(param_1), iVar3 != 1)) {
      iVar3 = Zombie::GetSizeType(param_1);
      bVar2 = iVar3 == 2;
      goto LAB_0412d6d0;
    }
  }
  bVar2 = true;
LAB_0412d6d0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* PlantToadstool::onEnter(ToadstoolState) */

void __thiscall PlantToadstool::onEnter(PlantToadstool *this,undefined4 param_2)

{
  RtWeakPtr *this_00;
  bool bVar1;
  PlantAnimRig_Toadstool *this_01;
  long *plVar2;
  ComponentVisualStretcher *pCVar3;
  RtObject *this_02;
  Zombie *this_03;
  undefined4 uVar4;
  
  this_01 = (PlantAnimRig_Toadstool *)FUN_0412c82c(*(undefined8 *)(this + 0x10));
  switch(param_2) {
  case 0:
    *(undefined4 *)(this + 0x54) = 0;
    *(undefined4 *)(this + 0x58) = 0;
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               (this + 0x38));
    uVar4 = PVZ_EOT();
    break;
  case 1:
    uVar4 = PVZ_T();
    *(undefined4 *)(this + 0x5c) = uVar4;
    PlantAnimRig_Toadstool::PlayBite(this_01);
    return;
  case 2:
    PlantAnimRig_Toadstool::PlayBeginTongueAttack(this_01);
    return;
  case 3:
  case 10:
    uVar4 = PVZ_T();
    *(undefined4 *)(this + 0x50) = uVar4;
    return;
  default:
    return;
  case 5:
    PlantAnimRig_Toadstool::PlayTongueGrab(this_01);
    return;
  case 6:
    uVar4 = PVZ_T();
    *(undefined4 *)(this + 0x50) = uVar4;
    PlantAnimRig_Toadstool::PlayBeginChewing(this_01);
    return;
  case 8:
    this_00 = (RtWeakPtr *)(this + 0x30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      this_02 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      this_03 = Sexy::RtObject::Cast<Zombie>(this_02);
      if (this_03 != (Zombie *)0x0) {
        Zombie::SetIsControlled(this_03,false);
      }
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
    }
    *(undefined4 *)(this + 0x54) = 0;
    *(undefined4 *)(this + 0x58) = 0;
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               (this + 0x38));
    uVar4 = PVZ_T();
    break;
  case 9:
    pCVar3 = (ComponentVisualStretcher *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
    ComponentVisualStretcher::Clear(pCVar3);
    PlantAnimRig_Toadstool::PlayPlantfoodBeginTongueAttack(this_01);
    return;
  case 0xc:
    PlantAnimRig_Toadstool::PlayPlantfoodTongueGrab(this_01);
    return;
  case 0xd:
    uVar4 = PVZ_T();
    *(undefined4 *)(this + 0x50) = uVar4;
    PlantAnimRig_Toadstool::PlayPlantfoodBeginChewing(this_01);
    return;
  case 0xf:
    PlantAnimRig_Toadstool::PlayPlantfoodEndSwallowing(this_01);
    return;
  case 0x10:
    PlantAnimRig_Toadstool::PlayPlantfoodBurp(this_01);
    return;
  }
  *(undefined4 *)(this + 0x50) = uVar4;
  pCVar3 = (ComponentVisualStretcher *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  ComponentVisualStretcher::Clear(pCVar3);
  pCVar3 = (ComponentVisualStretcher *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  ComponentVisualStretcher::Clear(pCVar3);
  plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar2 + 0x118))();
  return;
}


/* PlantToadstool::setState(ToadstoolState) */

void __thiscall PlantToadstool::setState(PlantToadstool *this,int param_2)

{
  PlantAnimRig_HollyKnight *this_00;
  
  this_00 = (PlantAnimRig_HollyKnight *)FUN_0412c82c(*(undefined8 *)(this + 0x10));
  onExit(this,*(undefined4 *)(this + 0x28));
  *(int *)(this + 0x28) = param_2;
  PlantAnimRig_HollyKnight::SetNumDamageStates(this_00,param_2);
  onEnter(this,*(undefined4 *)(this + 0x28));
  return;
}


/* PlantToadstool::ApplyPlantfood() */

void __thiscall PlantToadstool::ApplyPlantfood(PlantToadstool *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  *(undefined4 *)(this + 0x54) = 0;
  Board::SetGridSquareLocked
            (*(Board **)(gLawnApp + 0x9f0),*(int *)(*(long *)(this + 0x10) + 0x114),
             *(int *)(*(long *)(this + 0x10) + 0x110),true);
  setState(this,8);
  return;
}


/* PlantToadstool::CancelPlantfood() */

void __thiscall PlantToadstool::CancelPlantfood(PlantToadstool *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  Board::SetGridSquareLocked
            (*(Board **)(gLawnApp + 0x9f0),*(int *)(*(long *)(this + 0x10) + 0x114),
             *(int *)(*(long *)(this + 0x10) + 0x110),false);
  setState(this,0);
  return;
}


/* PlantToadstool::transitionIfTimeIsUp(ToadstoolState, float) */

void __thiscall
PlantToadstool::transitionIfTimeIsUp(float param_1,PlantToadstool *this,undefined8 param_3)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (fVar1 - *(float *)(this + 0x50) < param_1) {
    return;
  }
  setState(this,param_3);
  return;
}


/* PlantToadstool::transitionIfCurrentAnimationIsDone(ToadstoolState) */

void __thiscall
PlantToadstool::transitionIfCurrentAnimationIsDone(PlantToadstool *this,undefined8 param_2)

{
  char cVar1;
  PlantAnimRig_Toadstool *this_00;
  
  this_00 = (PlantAnimRig_Toadstool *)FUN_0412c82c(*(undefined8 *)(this + 0x10));
  cVar1 = PlantAnimRig_Toadstool::CurrentAnimationIsFinished(this_00);
  if (cVar1 == '\0') {
    return;
  }
  setState(this,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantToadstool::OnAnimCommand(std::string const&, std::string const&) */

void __thiscall PlantToadstool::OnAnimCommand(PlantToadstool *this,string *param_1,string *param_2)

{
  RtWeakPtr *this_00;
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  GridItem *pGVar6;
  long *plVar7;
  ComponentVisualStretcher *pCVar8;
  long lVar9;
  PlantAnimRig_Toadstool *this_01;
  RtObject *pRVar10;
  Zombie *pZVar11;
  _func_void *extraout_x1;
  string *psVar12;
  string *psVar13;
  Plant *pPVar14;
  code *pcVar15;
  undefined8 uVar16;
  DamageInfo *pDVar17;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(this + 0x28)) {
  case 1:
    bVar3 = std::operator==(param_1,"use_action");
    if (bVar3) {
      this_01 = (PlantAnimRig_Toadstool *)FUN_0412c82c(*(undefined8 *)(this + 0x10));
      PlantAnimRig_Toadstool::PlayBiteContinued(this_01);
    }
    bVar3 = std::operator==(param_1,"retract");
    psVar13 = (string *)(ulong)bVar3;
    if (!bVar3) break;
    this_00 = (RtWeakPtr *)(this + 0x30);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar3) {
      pRVar10 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pZVar11 = Sexy::RtObject::Cast<Zombie>(pRVar10);
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar3) goto LAB_0412dc74;
LAB_0412def0:
      if (pZVar11 != (Zombie *)0x0) {
        cVar2 = RealObject::IsOnOpposingTeam((RealObject *)pZVar11,*(RealObject **)(this + 0x10));
        if ((cVar2 != '\0') &&
           ((cVar2 = zombieIsBlacklisted(this,pZVar11), cVar2 != '\0' ||
            (cVar2 = canZombieBeMoved(this,pZVar11), cVar2 == '\0')))) goto LAB_0412dc84;
        uVar5 = RealObject::IsOnOpposingTeam((RealObject *)pZVar11,*(RealObject **)(this + 0x10));
        if ((uVar5 & 0xff) != 0) {
          psVar13 = (string *)(ulong)(uVar5 & 0xff);
          setState(this,5);
        }
      }
    }
    else {
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (!bVar3) goto LAB_0412dbcc;
      pZVar11 = (Zombie *)0x0;
LAB_0412dc74:
      pRVar10 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pGVar6 = Sexy::RtObject::Cast<GridItem>(pRVar10);
      if (pGVar6 == (GridItem *)0x0) goto LAB_0412def0;
LAB_0412dc84:
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pcVar15 = *(code **)(*plVar7 + 0x110);
      lVar9 = FUN_0412ba8c(*(undefined8 *)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
      pDVar17._0_4_ = *(DamageInfo **)(lVar9 + 0x3d8);
      uVar16 = *(undefined8 *)(this + 0x10);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo(pDVar17._0_4_,local_70,local_6c,aDStack_68,uVar16,aPStack_78,0);
      (*pcVar15)(plVar7,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
    }
    goto LAB_0412dbcc;
  case 2:
    bVar3 = std::operator==(param_1,"use_action");
    if (bVar3) {
      launchTongue(this,0);
      psVar13 = (string *)0x1;
      goto LAB_0412dbcc;
    }
    break;
  default:
    cVar2 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar2 == '\0') {
      psVar13 = ___stack_chk_guard;
      psVar12 = local_8;
      if (local_8 == ___stack_chk_guard) {
        PlantFramework::OnAnimCommand((string *)this,param_1);
        return;
      }
      goto LAB_0412e034;
    }
    break;
  case 5:
    bVar3 = std::operator==(param_1,"retract");
    if (bVar3) {
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x30));
      if (bVar3) {
        pRVar10 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
        pZVar11 = Sexy::RtObject::Cast<Zombie>(pRVar10);
        pCVar8 = (ComponentVisualStretcher *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
        ComponentVisualStretcher::Clear(pCVar8);
        bVar3 = true;
        if (pZVar11 == (Zombie *)0x0) break;
LAB_0412df60:
        psVar13 = (string *)(ulong)bVar3;
        pcVar15 = *(code **)(*(long *)pZVar11 + 0x120);
        uVar16 = *(undefined8 *)(this + 0x10);
        Sexy::Point::Point(aPStack_78,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,aDStack_68,4,uVar16,aPStack_78,0)
        ;
        (*pcVar15)(pZVar11,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
        *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
      }
      else {
        pCVar8 = (ComponentVisualStretcher *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
        ComponentVisualStretcher::Clear(pCVar8);
        psVar13 = (string *)0x1;
      }
      goto LAB_0412dbcc;
    }
    break;
  case 7:
    bVar3 = std::operator==(param_1,"use_action");
    if (bVar3) {
      lVar9 = FUN_0412ba8c(*(undefined8 *)(this + 0x10));
      iVar4 = FUN_04129d54(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
      iVar1 = *(int *)(lVar9 + 0x360);
      if (iVar4 < 2) {
        iVar1 = *(int *)(lVar9 + 0x35c);
      }
      swallowZombiesAndProduceSun(this,iVar1);
      psVar13 = (string *)0x1;
      goto LAB_0412dbcc;
    }
    break;
  case 9:
    bVar3 = std::operator==(param_1,"use_action");
    if (bVar3) {
      launchTongue(this,1);
      psVar13 = (string *)0x1;
      goto LAB_0412dbcc;
    }
    break;
  case 0xc:
    bVar3 = std::operator==(param_1,"retract");
    if (bVar3) {
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x30));
      if (!bVar3) {
        pCVar8 = (ComponentVisualStretcher *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
        ComponentVisualStretcher::Clear(pCVar8);
        psVar13 = (string *)0x1;
        goto LAB_0412dbcc;
      }
      pRVar10 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
      pZVar11 = Sexy::RtObject::Cast<Zombie>(pRVar10);
      pCVar8 = (ComponentVisualStretcher *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
      ComponentVisualStretcher::Clear(pCVar8);
      if (pZVar11 != (Zombie *)0x0) goto LAB_0412df60;
    }
    break;
  case 0xe:
    bVar3 = std::operator==(param_1,"use_action");
    if (bVar3) {
      lVar9 = FUN_0412ba8c(*(undefined8 *)(this + 0x10));
      iVar4 = FUN_04129d54(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
      iVar1 = *(int *)(lVar9 + 1000);
      if (iVar4 < 2) {
        iVar1 = *(int *)(lVar9 + 0x3e4);
      }
      swallowZombiesAndProduceSun(this,iVar1);
      psVar13 = (string *)0x1;
      goto LAB_0412dbcc;
    }
    break;
  case 0x10:
    bVar3 = std::operator==(param_1,"use_action");
    if (bVar3) {
      pPVar14 = *(Plant **)(this + 0x10);
      *(undefined4 *)(pPVar14 + 0x150) = 1;
      std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_70,extraout_x1);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aDStack_68,(RtWeakPtrBase *)&local_70);
      Plant::Fire(pPVar14,(RtWeakPtr<Sexy::SoundResource> *)aDStack_68,0xffffffff,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68);
      Sexy::RtId::~RtId((RtId *)&local_70);
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
      psVar13 = (string *)0x1;
      goto LAB_0412dbcc;
    }
  }
  psVar13 = (string *)0x1;
LAB_0412dbcc:
  psVar12 = ___stack_chk_guard;
  param_2 = local_8;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_0412e034:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(psVar13,psVar12,param_2);
}


/* PlantToadstool::~PlantToadstool() */

void __thiscall PlantToadstool::~PlantToadstool(PlantToadstool *this)

{
  *(undefined ***)this = &PTR_GetClass_067ead10;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x38));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantToadstool::~PlantToadstool() */

void __thiscall PlantToadstool::~PlantToadstool(PlantToadstool *this)

{
  ~PlantToadstool(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantToadstool::isTargetUnique(BoardEntity const*) const */

void PlantToadstool::isTargetUnique(BoardEntity *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  uVar2 = FUN_0412b128(*(undefined8 *)(param_1 + 0x38));
  uVar3 = FUN_0412b178(*(undefined8 *)(param_1 + 0x40));
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>const*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                       (uVar2,uVar3,aRStack_20);
  local_10 = FUN_0412b178(*(undefined8 *)(param_1 + 0x40));
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantToadstool::findTargetInAttackRect(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&,
   BoardEntityTypeFlag) */

void PlantToadstool::findTargetInAttackRect
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1_00,
               PlantToadstool *param_1,undefined8 param_3,undefined4 param_4,int *param_5,
               undefined8 param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  GridItem *pGVar6;
  Zombie *pZVar7;
  SharkMinion *this;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar8 = -100;
  findEntitiesInAttackRect(param_1,avStack_20,param_3,param_4,param_6);
  iVar3 = SharkMinion::getRow(*(SharkMinion **)(param_1 + 0x10));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (param_1_00);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  fVar10 = 1e+09;
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
  if (bVar1) {
    do {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38)
      ;
      this = (SharkMinion *)*puVar5;
      if (this != (SharkMinion *)0x0) {
        fVar9 = (float)calculateDistanceToTarget(param_1,this,param_4);
        iVar4 = SharkMinion::getRow(this);
        if (iVar3 == iVar8) {
          bVar1 = fVar9 < fVar10 && iVar4 == iVar3;
        }
        else {
          bVar1 = iVar4 == iVar3 || fVar9 < fVar10;
        }
        if ((((bVar1) && (cVar2 = isInRange(param_1,this,param_4), cVar2 != '\0')) &&
            (cVar2 = isTargetInCorrectRowAndColumn(param_1,(BoardEntity *)this), cVar2 != '\0')) &&
           (cVar2 = isTargetUnique((BoardEntity *)param_1), cVar2 != '\0')) {
          pGVar6 = Sexy::RtObject::Cast<GridItem>((RtObject *)this);
          pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)this);
          if (((pZVar7 != (Zombie *)0x0) &&
              (cVar2 = canZombieBeTargeted(param_1,pZVar7), cVar2 != '\0')) ||
             ((pGVar6 != (GridItem *)0x0 &&
              (cVar2 = (**(code **)(*(long *)pGVar6 + 0x200))(pGVar6), cVar2 != '\0')))) {
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)param_1_00,
                       (RtWeakPtrBase *)aRStack_28);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
            fVar10 = fVar9;
            iVar8 = iVar4;
            if ((*param_5 == 0) &&
               (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_1_00), cVar2 != '\0'))
            break;
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    } while (bVar1);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantToadstool::FindTargetZombie(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&) */

void __thiscall
PlantToadstool::FindTargetZombie
          (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1_00,
          PlantToadstool *this,undefined8 param_1,undefined8 param_4)

{
  bool bVar1;
  RtObject *this_00;
  Zombie *pZVar2;
  Ratio aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Ratio::Ratio(aRStack_20);
  findTargetInAttackRect(aRStack_18,this,param_1,param_4,aRStack_20,2);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    pZVar2 = Sexy::RtObject::Cast<Zombie>(this_00);
    if (pZVar2 != (Zombie *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)param_1_00,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      goto LAB_0412e474;
    }
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (param_1_00);
LAB_0412e474:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantToadstool::FindTargetDamageableGridItem(Sexy::TRect<int>&, PlantWeapon) */

void PlantToadstool::FindTargetDamageableGridItem
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1_00,
               undefined8 param_1,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  RtObject *this;
  GridItem *pGVar2;
  Ratio aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Ratio::Ratio(aRStack_20);
  findTargetInAttackRect(aRStack_18,param_1,param_3,param_4,aRStack_20,4);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    pGVar2 = Sexy::RtObject::Cast<GridItem>(this);
    if (pGVar2 != (GridItem *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)param_1_00,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      goto LAB_0412e558;
    }
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (param_1_00);
LAB_0412e558:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantToadstool::onUpdate(ToadstoolState) */

void PlantToadstool::onUpdate
               (undefined1 param_1 [16],float param_2,PlantToadstool *param_3,undefined4 param_4)

{
  RtMixedPtrBase *pRVar1;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar2;
  char cVar3;
  bool bVar4;
  GridItem *pGVar5;
  long *plVar6;
  ToadstoolProps *pTVar7;
  ComponentVisualStretcher *pCVar8;
  PlantAnimRig_Toadstool *this;
  long lVar9;
  RtObject *pRVar10;
  Zombie *pZVar11;
  undefined8 *puVar12;
  code *pcVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  DamageInfo *pDVar17;
  Point aPStack_80 [8];
  undefined8 local_78;
  undefined4 local_70;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_4) {
  case 0:
    cVar3 = tryToAcquireTargetForWeapon(param_3,0,1);
    if (cVar3 == '\0') {
      cVar3 = tryToAcquireTargetForWeapon(param_3,0,0);
      if (cVar3 != '\0') {
        setState(param_3,2);
      }
      break;
    }
    goto LAB_0412e728;
  case 1:
    cVar3 = tryToAcquireTargetForWeapon(param_3,0,1);
    if (cVar3 == '\0') {
      *(undefined4 *)(param_3 + 0x5c) = 0;
      setState(param_3);
      break;
    }
    fVar15 = (float)PVZ_T();
    fVar16 = *(float *)(param_3 + 0x5c);
    lVar9 = FUN_0412ba8c(*(undefined8 *)(param_3 + 0x10));
    if (fVar15 <= fVar16 + *(float *)(lVar9 + 0x2d4)) break;
LAB_0412e728:
    setState(param_3,1);
    break;
  case 2:
    pCVar8 = (ComponentVisualStretcher *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0x60));
    cVar3 = ComponentVisualStretcher::IsStretching(pCVar8);
    if (cVar3 == '\0') break;
    pCVar8 = (ComponentVisualStretcher *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0x60));
    cVar3 = ComponentVisualStretcher::HasReachedTarget(pCVar8);
    if (cVar3 == '\0') break;
    pRVar1 = (RtMixedPtrBase *)(param_3 + 0x30);
    cVar3 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
    if (cVar3 != '\0') {
      lVar9 = FUN_0412ba8c(*(undefined8 *)(param_3 + 0x10));
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )(param_3 + 0x38),(RtWeakPtr *)pRVar1);
      *(int *)(param_3 + 0x54) = *(int *)(param_3 + 0x54) + 1;
      pRVar10 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      pZVar11 = Sexy::RtObject::Cast<Zombie>(pRVar10);
      pRVar10 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      pGVar5 = Sexy::RtObject::Cast<GridItem>(pRVar10);
      if (pGVar5 == (GridItem *)0x0) {
        if (pZVar11 == (Zombie *)0x0) break;
        cVar3 = RealObject::IsOnOpposingTeam((RealObject *)pZVar11,*(RealObject **)(param_3 + 0x10))
        ;
        if ((cVar3 == '\0') ||
           ((cVar3 = zombieIsBlacklisted(param_3,pZVar11), cVar3 == '\0' &&
            (cVar3 = canZombieBeMoved(param_3,pZVar11), cVar3 != '\0')))) {
          cVar3 = RealObject::IsOnOpposingTeam
                            ((RealObject *)pZVar11,*(RealObject **)(param_3 + 0x10));
          if (cVar3 != '\0') {
            Zombie::SetIsControlled(pZVar11,true);
            Zombie::ApplyCondition((Zombie *)0x3f800000,0,pZVar11,2,1);
            setState(param_3,3);
          }
          break;
        }
      }
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
                    /* WARNING: Load size is inaccurate */
      pDVar17._0_4_ = *(DamageInfo **)(lVar9 + 0x3d8);
      uVar14 = *(undefined8 *)(param_3 + 0x10);
      pcVar13 = *(code **)(*plVar6 + 0x110);
      Sexy::Point::Point(aPStack_80,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_78,1.0,0.0);
      DamageInfo::DamageInfo
                (pDVar17._0_4_,(undefined4)local_78,local_78._4_4_,aDStack_68,uVar14,aPStack_80,0);
      (*pcVar13)(plVar6,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar1);
    }
    goto LAB_0412e960;
  case 3:
    FUN_04129d5c((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68,*(undefined8 *)(param_3 + 0x10));
    pRVar10 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68);
    pTVar7 = Sexy::RtObject::Cast<ToadstoolProps_const>(pRVar10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68);
                    /* WARNING: Load size is inaccurate */
    transitionIfTimeIsUp(*(PlantToadstool **)(pTVar7 + 0x354),param_3,4);
    break;
  case 4:
    bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_3 + 0x30));
    if (bVar4) {
      pRVar10 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0x30));
      pZVar11 = Sexy::RtObject::Cast<Zombie>(pRVar10);
      if (pZVar11 == (Zombie *)0x0) goto LAB_0412e890;
      pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0x60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
      fVar15 = (float)ComponentVisualStretcher::GetDelta();
      puVar12 = (undefined8 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)pZVar11);
      local_78 = *puVar12;
      local_70 = *(undefined4 *)(puVar12 + 1);
      EATextSquish::Vec3::Vec3((Vec3 *)aDStack_68,fVar15,param_2,0.0);
      EATextSquish::Vec3::operator+=((Vec3 *)&local_78,(Vec3 *)aDStack_68);
      (**(code **)(*(long *)pZVar11 + 0x78))(pZVar11,(Vec3 *)&local_78);
      pCVar8 = (ComponentVisualStretcher *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
      cVar3 = ComponentVisualStretcher::IsStretching(pCVar8);
      if (cVar3 == '\0') break;
      pCVar8 = (ComponentVisualStretcher *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
      cVar3 = ComponentVisualStretcher::HasReachedTarget(pCVar8);
      if (cVar3 == '\0') break;
    }
    else {
LAB_0412e890:
      pCVar8 = (ComponentVisualStretcher *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0x60));
      cVar3 = ComponentVisualStretcher::IsStretching(pCVar8);
      if (cVar3 != '\0') {
        pCVar8 = (ComponentVisualStretcher *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0x60));
        ComponentVisualStretcher::HasReachedTarget(pCVar8);
      }
    }
    setState(param_3,5);
    break;
  case 5:
    transitionIfCurrentAnimationIsDone(param_3,6);
    break;
  case 6:
    FUN_04129d5c((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68,*(undefined8 *)(param_3 + 0x10));
    pRVar10 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68);
    pTVar7 = Sexy::RtObject::Cast<ToadstoolProps_const>(pRVar10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68);
                    /* WARNING: Load size is inaccurate */
    transitionIfTimeIsUp(*(PlantToadstool **)(pTVar7 + 0x358),param_3,7);
    break;
  case 7:
  case 0x10:
    goto LAB_0412e6a4;
  case 8:
    lVar9 = FUN_0412ba8c(*(undefined8 *)(param_3 + 0x10));
    fVar15 = (float)PVZ_T();
    fVar16 = *(float *)(param_3 + 0x50);
    cVar3 = tryToAcquireTargetForWeapon(param_3,1,0);
    if (cVar3 != '\0') {
LAB_0412ed10:
      setState(param_3,9);
      break;
    }
    if (fVar15 - fVar16 < *(float *)(lVar9 + 0x3c8)) break;
    goto LAB_0412e960;
  case 9:
    pCVar8 = (ComponentVisualStretcher *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0x68));
    cVar3 = ComponentVisualStretcher::IsStretching(pCVar8);
    if (cVar3 == '\0') break;
    pCVar8 = (ComponentVisualStretcher *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0x68));
    cVar3 = ComponentVisualStretcher::HasReachedTarget(pCVar8);
    if (cVar3 == '\0') break;
    pRVar1 = (RtMixedPtrBase *)(param_3 + 0x30);
    cVar3 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
    if (cVar3 != '\0') {
      lVar9 = FUN_0412ba8c(*(undefined8 *)(param_3 + 0x10));
      *(int *)(param_3 + 0x54) = *(int *)(param_3 + 0x54) + 1;
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )(param_3 + 0x38),(RtWeakPtr *)pRVar1);
      pRVar10 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      pZVar11 = Sexy::RtObject::Cast<Zombie>(pRVar10);
      pRVar10 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      pGVar5 = Sexy::RtObject::Cast<GridItem>(pRVar10);
      if (pGVar5 == (GridItem *)0x0) {
        if (pZVar11 == (Zombie *)0x0) break;
        cVar3 = RealObject::IsOnOpposingTeam((RealObject *)pZVar11,*(RealObject **)(param_3 + 0x10))
        ;
        if ((cVar3 == '\0') ||
           ((cVar3 = zombieIsBlacklisted(param_3,pZVar11), cVar3 == '\0' &&
            (cVar3 = canZombieBeMoved(param_3,pZVar11), cVar3 != '\0')))) {
          cVar3 = RealObject::IsOnOpposingTeam
                            ((RealObject *)pZVar11,*(RealObject **)(param_3 + 0x10));
          if (cVar3 != '\0') {
            Zombie::SetIsControlled(pZVar11,true);
            Zombie::ApplyCondition((Zombie *)0x3f800000,0,pZVar11,2,1);
            setState(param_3,10);
          }
          break;
        }
      }
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
                    /* WARNING: Load size is inaccurate */
      pDVar17._0_4_ = *(DamageInfo **)(lVar9 + 0x3d8);
      uVar14 = *(undefined8 *)(param_3 + 0x10);
      pcVar13 = *(code **)(*plVar6 + 0x110);
      Sexy::Point::Point(aPStack_80,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_78,1.0,0.0);
      DamageInfo::DamageInfo
                (pDVar17._0_4_,(undefined4)local_78,local_78._4_4_,aDStack_68,uVar14,aPStack_80,0);
      (*pcVar13)(plVar6,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar1);
    }
    goto LAB_0412eae0;
  case 10:
    FUN_04129d5c((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68,*(undefined8 *)(param_3 + 0x10));
    pRVar10 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68);
    pTVar7 = Sexy::RtObject::Cast<ToadstoolProps_const>(pRVar10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68);
                    /* WARNING: Load size is inaccurate */
    transitionIfTimeIsUp(*(PlantToadstool **)(pTVar7 + 0x3dc),param_3,0xb);
    break;
  case 0xb:
    bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_3 + 0x30));
    if (bVar4) {
      pRVar10 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0x30));
      pZVar11 = Sexy::RtObject::Cast<Zombie>(pRVar10);
      if (pZVar11 != (Zombie *)0x0) {
        pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0x68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
        fVar15 = (float)ComponentVisualStretcher::GetDelta();
        puVar12 = (undefined8 *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)pZVar11);
        local_78 = *puVar12;
        local_70 = *(undefined4 *)(puVar12 + 1);
        EATextSquish::Vec3::Vec3((Vec3 *)aDStack_68,fVar15,param_2,0.0);
        EATextSquish::Vec3::operator+=((Vec3 *)&local_78,(Vec3 *)aDStack_68);
        (**(code **)(*(long *)pZVar11 + 0x78))(pZVar11,(Vec3 *)&local_78);
        pCVar8 = (ComponentVisualStretcher *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
        cVar3 = ComponentVisualStretcher::IsStretching(pCVar8);
        if (cVar3 == '\0') break;
        pCVar8 = (ComponentVisualStretcher *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
        cVar3 = ComponentVisualStretcher::HasReachedTarget(pCVar8);
        if (cVar3 == '\0') break;
        goto LAB_0412eae0;
      }
    }
    pCVar8 = (ComponentVisualStretcher *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0x68));
    cVar3 = ComponentVisualStretcher::IsStretching(pCVar8);
    if (cVar3 != '\0') {
      pCVar8 = (ComponentVisualStretcher *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0x68));
      ComponentVisualStretcher::HasReachedTarget(pCVar8);
    }
LAB_0412eae0:
    setState(param_3,0xc);
    break;
  case 0xc:
    this = (PlantAnimRig_Toadstool *)FUN_0412c82c(*(undefined8 *)(param_3 + 0x10));
    cVar3 = PlantAnimRig_Toadstool::CurrentAnimationIsFinished(this);
    if (cVar3 == '\0') break;
    lVar9 = FUN_0412ba8c(*(undefined8 *)(param_3 + 0x10));
    if ((*(int *)(param_3 + 0x54) < *(int *)(lVar9 + 0x3cc)) &&
       (cVar3 = tryToAcquireTargetForWeapon(param_3,1,0), cVar3 != '\0')) goto LAB_0412ed10;
    if (0 < *(int *)(param_3 + 0x58)) {
      setState(param_3,0xd);
      break;
    }
LAB_0412e960:
    setState(param_3,0);
    break;
  case 0xd:
    lVar9 = FUN_0412ba8c(*(undefined8 *)(param_3 + 0x10));
                    /* WARNING: Load size is inaccurate */
    transitionIfTimeIsUp(*(PlantToadstool **)(lVar9 + 0x3e0),param_3,0xe);
    break;
  case 0xe:
    transitionIfCurrentAnimationIsDone(param_3,0xf);
    break;
  case 0xf:
    cVar3 = Plant::GetAvatarEnable(*(Plant **)(param_3 + 0x10));
    if (cVar3 != '\0') {
      transitionIfCurrentAnimationIsDone(param_3,0x10);
      break;
    }
LAB_0412e6a4:
    transitionIfCurrentAnimationIsDone(param_3,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantToadstool::UpdateActions() */

void __thiscall PlantToadstool::UpdateActions(PlantToadstool *this)

{
  onUpdate(this,*(undefined4 *)(this + 0x28));
  return;
}

