// Class: DangerRoomSeedBank


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSeedBank::drawPacket(Sexy::Graphics*, PacketRenderData const&, bool) */

void __thiscall
DangerRoomSeedBank::drawPacket
          (DangerRoomSeedBank *this,Graphics *param_1,PacketRenderData *param_2,bool param_3)

{
  ResourceInfo *pRVar1;
  RtWeakPtr *this_00;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3) {
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xff,0x80);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_2 + 0x170));
    Sexy::Insets::Insets
              (aIStack_18,*(int *)(param_2 + 0x30),*(int *)(param_2 + 0x34),*(int *)(param_2 + 0x28)
               ,*(int *)(param_2 + 0x2c));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar1,(TRect *)aIStack_18,(TRect *)(param_2 + 0x20))
    ;
  }
  else {
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_2 + 0x170));
    Sexy::Insets::Insets
              (aIStack_18,*(int *)(param_2 + 0x30),*(int *)(param_2 + 0x34),*(int *)(param_2 + 0x28)
               ,*(int *)(param_2 + 0x2c));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar1,(TRect *)aIStack_18,(TRect *)(param_2 + 0x20))
    ;
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_2 + 0x170));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar1,*(int *)(param_2 + 0x18),*(int *)(param_2 + 0x1c),
               (TRect *)(param_2 + 8));
  }
  this_00 = (RtWeakPtr *)(param_2 + 0x170);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar1,*(int *)(param_2 + 0xc0),*(int *)(param_2 + 0xc4),
             (TRect *)(param_2 + 0xb0));
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar1,*(int *)(param_2 + 0xf0),*(int *)(param_2 + 0xf4),
             (TRect *)(param_2 + 0xe0));
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar1,*(int *)(param_2 + 0xd8),*(int *)(param_2 + 0xdc),
             (TRect *)(param_2 + 200));
  if (param_3) {
    Sexy::Graphics::SetColorizeImages(param_1,false);
    Sexy::Color::Color((Color *)aIStack_18,1);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSeedBank::Draw(Sexy::Graphics*) */

void __thiscall DangerRoomSeedBank::Draw(DangerRoomSeedBank *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  SeedPacketUtils *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar3;
  PacketRenderData *pPVar4;
  ulong uVar5;
  ulong uVar6;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  iVar1 = FUN_03c9fdc0(0);
  iVar2 = FUN_03c9fdc0(4);
  Sexy::Graphics::Translate(param_1,iVar1,iVar2);
  for (uVar6 = 0; uVar5 = FUN_03c9fa7c(*(undefined8 *)(this + 0xd8),*(undefined8 *)(this + 0xe0)),
      uVar6 < uVar5; uVar6 = uVar6 + 1) {
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03c9fa88(*(undefined8 *)(this + 0xd8),uVar6);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    pPVar4 = (PacketRenderData *)
             SeedPacketUtils::GetPlantPacketRenderData(this_00,(string *)(lVar3 + 8),-1,-1,-1);
    drawPacket(this,param_1,pPVar4,false);
    iVar1 = FUN_03c9fdc0(4);
    Sexy::Graphics::Translate(param_1,iVar1 + *(int *)(pPVar4 + 0x28),0);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomSeedBank::DangerRoomSeedBank() */

void __thiscall DangerRoomSeedBank::DangerRoomSeedBank(DangerRoomSeedBank *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0675c0a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  return;
}


/* DangerRoomSeedBank::~DangerRoomSeedBank() */

void __thiscall DangerRoomSeedBank::~DangerRoomSeedBank(DangerRoomSeedBank *this)

{
  *(undefined ***)this = &PTR_GetClass_0675c0a0;
  std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
           *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DangerRoomSeedBank::~DangerRoomSeedBank() */

void __thiscall DangerRoomSeedBank::~DangerRoomSeedBank(DangerRoomSeedBank *this)

{
  ~DangerRoomSeedBank(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSeedBank::RemoveSeed(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall DangerRoomSeedBank::RemoveSeed(DangerRoomSeedBank *this,RtWeakPtrBase *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
LAB_03ca36d8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_01 = (RtWeakPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_01,param_2);
    if (cVar1 != '\0') {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
      ::erase((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
               *)this_00,local_10);
      goto LAB_03ca36d8;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* DangerRoomSeedBank::AddSeed(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall DangerRoomSeedBank::AddSeed(DangerRoomSeedBank *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  RtWeakPtrBase *this_00;
  LotteryResultProgressBar *pLVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(this + 0xd8);
  lVar6 = FUN_03c9fa7c(uVar9,*(undefined8 *)(this + 0xe0));
  lVar8 = 0;
  do {
    if (lVar8 == lVar6) {
      std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
      ::push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                   *)(this + 0xd8),(RtWeakPtr *)param_2);
      iVar2 = FUN_03c9fa7c(*(undefined8 *)(this + 0xd8),*(undefined8 *)(this + 0xe0));
      iVar3 = FUN_03c9fdc0(4);
      pLVar7 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2a88);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
      pLVar7 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2a88);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
      (**(code **)(*(long *)this + 0x198))
                (this,0,0,(iVar3 + iVar4) * iVar2 + iVar5,*(undefined4 *)(this + 0x54));
      return;
    }
    this_00 = (RtWeakPtrBase *)FUN_03c9fa88(uVar9,lVar8);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_00,param_2);
    lVar8 = lVar8 + 1;
  } while (cVar1 == '\0');
  return;
}

