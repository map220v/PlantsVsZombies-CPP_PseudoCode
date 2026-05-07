// Class: PlantSaucer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSaucer::StaticClassInit() */

void PlantSaucer::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSaucer");
    (*pcVar2)(plVar1,asStack_10,FUN_04106f10,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSaucer::StaticGetClass() */

long * PlantSaucer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantSaucer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSaucer::GetClass() const */

long * PlantSaucer::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantSaucer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSaucer::WhiteScreen() */

void PlantSaucer::WhiteScreen(void)

{
  undefined8 uVar1;
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Effect_ScreenFade::Create();
  Sexy::Insets::Insets(aIStack_38,0x46,0xb4,0xfa,100);
  Sexy::Insets::Insets(aIStack_28,0xff,0xff,0xff,200);
  Sexy::Insets::Insets(aIStack_18,aIStack_38);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f333333,0,0x3f800000,uVar1,1,aIStack_18,2);
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f800000,0,0x3f800000,uVar1,0,aIStack_18,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSaucer::CanBeTargeted() */

bool __thiscall PlantSaucer::CanBeTargeted(PlantSaucer *this)

{
  int iVar1;
  Effect_AngerFlame *this_00;
  
  this_00 = (Effect_AngerFlame *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar1 = Effect_AngerFlame::GetFlameCol(this_00);
  return iVar1 == 1;
}


/* PlantSaucer::CalcRenderOrder() */

void __thiscall PlantSaucer::CalcRenderOrder(PlantSaucer *this)

{
  int iVar1;
  Effect_AngerFlame *this_00;
  
  this_00 = (Effect_AngerFlame *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar1 = Effect_AngerFlame::GetFlameCol(this_00);
  if (iVar1 != 1) {
    Board::MakeRenderOrder(0x639c0,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
    return;
  }
  PlantFramework::CalcRenderOrder((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSaucer::Initialize() */

void __thiscall PlantSaucer::Initialize(PlantSaucer *this)

{
  RtObject *this_00;
  PlantAnimRig_Saucer *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_Saucer>(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  PlantAnimRig_DevilsFlower::SetPlantPtr((PlantAnimRig_DevilsFlower *)pPVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSaucer::PlantSaucer() */

void __thiscall PlantSaucer::PlantSaucer(PlantSaucer *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067e3bb0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x40) = uVar1;
  return;
}


/* PlantSaucer::StaticNew() */

PlantSaucer * PlantSaucer::StaticNew(void)

{
  PlantSaucer *this;
  
  this = ::operator_new(0x48);
  PlantSaucer(this);
  return this;
}


/* PlantSaucer::ConditionCheck() */

undefined8 __thiscall PlantSaucer::ConditionCheck(PlantSaucer *this)

{
  int iVar1;
  Effect_AngerFlame *this_00;
  RtObject *this_01;
  PlantAnimRig_Saucer *this_02;
  float fVar2;
  
  this_00 = (Effect_AngerFlame *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar1 = Effect_AngerFlame::GetFlameCol(this_00);
  if ((iVar1 == 0x10) && (fVar2 = (float)PVZ_T(), *(float *)(this + 0x40) < fVar2)) {
    this_01 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    this_02 = Sexy::RtObject::Cast<PlantAnimRig_Saucer>(this_01);
    PlantAnimRig_Saucer::PlayAway(this_02);
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSaucer::DoPlantFoodDamage() */

void __thiscall PlantSaucer::DoPlantFoodDamage(PlantSaucer *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *this_00;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WhiteScreen();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Board::GetGridBoundingRect();
  EntityFinder::GetEntitiesTouchingRectangle
            (avStack_20,2,(__normal_iterator *)local_30,0xffffffff,0xffffffff);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30)
        , bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
    if ((((((this_00 != (Zombie *)0x0) &&
           (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(), cVar2 == '\0')) &&
          (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')) &&
         ((cVar2 = BoardEntity::IsOnScreen((BoardEntity *)this_00), cVar2 != '\0' &&
          (cVar2 = RealObject::IsOnOpposingTeam(this_00,1), cVar2 != '\0')))) &&
        ((bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00), !bVar1 &&
         ((cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0' &&
          (cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 == '\0')))))) &&
       (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), !bVar1)) {
      cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
      if (cVar2 == '\0') {
        lVar4 = FUN_04106998(*(undefined8 *)(this + 0x10));
        fVar6 = *(float *)(lVar4 + 0x2b8);
      }
      else {
        lVar4 = FUN_04106998(*(undefined8 *)(this + 0x10));
        fVar6 = *(float *)(lVar4 + 700);
      }
      fVar5 = (float)Plant::GetZombieConditionExtendRate(*(Plant **)(this + 0x10),2);
      Zombie::ApplyCondition((Zombie *)(fVar5 * fVar6),0,this_00,2,1);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSaucer::OnAnimCommand(std::string const&, std::string const&) */

void PlantSaucer::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"plantfood_attack");
  if (bVar1) {
    DoPlantFoodDamage((PlantSaucer *)param_1);
  }
  PlantFramework::OnAnimCommand(param_1,param_2);
  return;
}


/* PlantSaucer::~PlantSaucer() */

void __thiscall PlantSaucer::~PlantSaucer(PlantSaucer *this)

{
  *(undefined ***)this = &PTR_GetClass_067e3bb0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantSaucer::~PlantSaucer() */

void __thiscall PlantSaucer::~PlantSaucer(PlantSaucer *this)

{
  ~PlantSaucer(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSaucer::CheckStunedCache(Zombie*) */

void PlantSaucer::CheckStunedCache(Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0x28);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this);
  ToolPacketData::GetProps();
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                       (uVar2,uVar3,aRStack_20);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSaucer::GetValidTarget() */

void PlantSaucer::GetValidTarget(void)

{
  bool bVar1;
  long in_x0;
  undefined8 uVar2;
  undefined8 uVar3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_28;
  undefined8 local_20;
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  local_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  (**(code **)(**(long **)(in_x0 + 0x10) + 0x178))(*(long **)(in_x0 + 0x10));
  EntityFinder::GetEntitiesTouchingRectangle();
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)in_x8);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)in_x8);
  local_28 = FUN_04107834(uVar2,uVar3);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)in_x8);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              (local_18,(__normal_iterator *)&local_28);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)in_x8);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_20);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSaucer::FillStunedCache(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&) */

void __thiscall PlantSaucer::FillStunedCache(PlantSaucer *this,vector *param_1)

{
  bool bVar1;
  undefined8 local_28;
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              (this + 0x28),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSaucer::DoNormalDamage(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&) */

void __thiscall PlantSaucer::DoNormalDamage(PlantSaucer *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  Zombie *this_00;
  long lVar5;
  int *piVar6;
  Zombie *pZVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
  if (bVar1) {
    do {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28)
      ;
      if ((RtObject *)*puVar4 != (RtObject *)0x0) {
        this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
        fVar10 = *(float *)(this + 0x40);
        fVar8 = (float)PVZ_T();
        bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00);
        if (((bVar1) || (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), bVar1)
            ) || (cVar2 = Zombie::CanTakeFatalDamage(this_00), cVar2 == '\0')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
          if (0.0 < fVar10 - fVar8) {
            pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
            fVar9 = (float)Plant::GetZombieConditionExtendRate(*(Plant **)(this + 0x10),2);
            Zombie::ApplyCondition((Zombie *)(fVar9 * (fVar10 - fVar8)),0,pZVar7,2,1);
          }
        }
        fVar8 = (float)FUN_04105f4c(*(undefined4 *)(this_00 + 0x280));
        fVar10 = (float)FUN_04105f50(*(undefined4 *)(this_00 + 0x2a8));
        lVar5 = FUN_04106998(*(undefined8 *)(this + 0x10));
        iVar3 = FUN_04105f44(*(undefined8 *)(this + 0x10));
        piVar6 = (int *)FUN_04105f54(*(undefined8 *)(lVar5 + 0x2c0),(long)(iVar3 + -1));
        if ((1 < iVar3) && (bVar1 < (fVar10 + fVar8 <= (float)*piVar6))) {
          FUN_04105f60(this_00 + 0x360);
          Zombie::SetIsControlled(this_00,true);
          puVar4 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   **)(this + 0x10));
          local_18 = *puVar4;
          local_10 = *(undefined4 *)(puVar4 + 1);
          Zombie::DoDropIntoIceHole(this_00,(SexyVector3 *)&local_18,true);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
    } while (bVar1);
  }
  FillStunedCache(this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSaucer::UpdateActions() */

void __thiscall PlantSaucer::UpdateActions(PlantSaucer *this)

{
  char cVar1;
  int iVar2;
  Effect_AngerFlame *pEVar3;
  RtObject *this_00;
  PlantAnimRig_Saucer *this_01;
  RealObject *this_02;
  string asStack_28 [8];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if ((cVar1 == '\0') && (cVar1 = ConditionCheck(this), cVar1 == '\0')) {
    GetValidTarget();
    pEVar3 = (Effect_AngerFlame *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    iVar2 = Effect_AngerFlame::GetFlameCol(pEVar3);
    if (iVar2 == 1) {
      cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty(avStack_20);
      if (cVar1 == '\0') {
        this_00 = (RtObject *)
                  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        this_01 = Sexy::RtObject::Cast<PlantAnimRig_Saucer>(this_00);
        PlantAnimRig_Saucer::PlayLight(this_01);
        this_02 = *(RealObject **)(this + 0x10);
        std::string::string(asStack_28,"Play_Saucer_Attack");
        RealObject::PlayPositionalSound(this_02,asStack_28,0.0);
        std::string::~string(asStack_28);
        nop();
      }
    }
    else {
      pEVar3 = (Effect_AngerFlame *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      iVar2 = Effect_AngerFlame::GetFlameCol(pEVar3);
      if ((iVar2 == 0x10) &&
         (cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty(avStack_20),
         cVar1 == '\0')) {
        DoNormalDamage(this,(vector *)avStack_20);
      }
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSaucer::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantSaucer::onAnimStoppedCallback(PlantSaucer *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"attack");
  if (bVar1) {
    fVar3 = (float)PVZ_T();
    lVar2 = FUN_04106998(*(undefined8 *)(this + 0x10));
    *(float *)(this + 0x40) = fVar3 + *(float *)(lVar2 + 0x2b8);
    GetValidTarget();
    DoNormalDamage(this,(vector *)avStack_20);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
  }
  else {
    bVar1 = std::operator==(param_1,"leave");
    if (bVar1) {
      Plant::KillPlant(*(Plant **)(this + 0x10),1,0,0x8000000000);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

