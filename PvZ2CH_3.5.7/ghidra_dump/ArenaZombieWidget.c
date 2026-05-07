// Class: ArenaZombieWidget


/* ArenaZombieWidget::SetZombieSeedType(Sexy::RtWeakPtr<ZombieType const>) */

void __thiscall ArenaZombieWidget::SetZombieSeedType(ArenaZombieWidget *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd8),param_2);
  return;
}


/* ArenaZombieWidget::ArenaZombieWidget() */

void __thiscall ArenaZombieWidget::ArenaZombieWidget(ArenaZombieWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06949500;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  return;
}


/* ArenaZombieWidget::~ArenaZombieWidget() */

void __thiscall ArenaZombieWidget::~ArenaZombieWidget(ArenaZombieWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06949500;
  if (*(long **)(this + 0xe0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe0) + 0x18))();
    *(undefined8 *)(this + 0xe0) = 0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ArenaZombieWidget::~ArenaZombieWidget() */

void __thiscall ArenaZombieWidget::~ArenaZombieWidget(ArenaZombieWidget *this)

{
  ~ArenaZombieWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaZombieWidget::DrawText(Sexy::Graphics*) */

void __thiscall ArenaZombieWidget::DrawText(ArenaZombieWidget *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  undefined4 local_28;
  int local_24;
  int local_20;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",auStack_30,(ulong)*(uint *)(this + 0xe8));
  iVar2 = FUN_04ada664(0);
  iVar3 = FUN_04ada664(0x14);
  Sexy::Insets::Insets((Insets *)&local_28,iVar2,iVar2,iVar3,iVar3);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xd8));
  if (bVar1) {
    local_28 = FUN_04ada664(10);
    local_24 = FUN_04ada664(0x16);
    local_24 = *(int *)(this + 0x54) - local_24;
    local_20 = FUN_04ada664(0xf);
    local_20 = *(int *)(this + 0x50) - local_20;
  }
  uVar4 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_26_HardShadow);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_30,(Insets *)&local_28,uVar4,aCStack_18,bVar1,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaZombieWidget::drawToBuffer() */

void __thiscall ArenaZombieWidget::drawToBuffer(ArenaZombieWidget *this)

{
  char cVar1;
  SeedPacketUtils *this_00;
  long lVar2;
  PacketRenderData *pPVar3;
  DeviceImage *pDVar4;
  
  if (*(long *)(this + 0xe0) == 0) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xd8));
    if (cVar1 != '\0') {
      this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
      pPVar3 = (PacketRenderData *)
               SeedPacketUtils::GetZombiePacketRenderData
                         (this_00,(string *)(lVar2 + 8),(string *)&PVPManager::PacketsZombiePrefix,
                          -1);
      pDVar4 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_00,pPVar3,0,0);
      *(DeviceImage **)(this + 0xe0) = pDVar4;
      SeedPacketUtils::DrawPacketToDeviceImage(this_00,pDVar4,pPVar3,false,-1,false,false);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaZombieWidget::Draw(Sexy::Graphics*) */

void __thiscall ArenaZombieWidget::Draw(ArenaZombieWidget *this,Graphics *param_1)

{
  Image *pIVar1;
  GraphicsAutoState aGStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  drawToBuffer(this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  Sexy::Color::Color(aCStack_18,1);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  pIVar1 = *(Image **)(this + 0xe0);
  Sexy::Graphics::DrawImage
            (param_1,pIVar1,0,0,(int)((float)*(int *)(pIVar1 + 0x38) * 0.65),
             (int)((float)*(int *)(pIVar1 + 0x3c) * 0.65));
  DrawText(this,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

