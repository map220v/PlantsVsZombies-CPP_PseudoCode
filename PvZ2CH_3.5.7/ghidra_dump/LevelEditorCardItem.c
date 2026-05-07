// Class: LevelEditorCardItem


/* LevelEditorCardItem::GetData() */

GriditemBarrelZombieDes * LevelEditorCardItem::GetData(void)

{
  long in_x0;
  GriditemBarrelZombieDes *in_x8;
  
  GriditemBarrelZombieDes::GriditemBarrelZombieDes(in_x8,(GriditemBarrelZombieDes *)(in_x0 + 0xd8));
  return in_x8;
}


/* LevelEditorCardItem::~LevelEditorCardItem() */

void __thiscall LevelEditorCardItem::~LevelEditorCardItem(LevelEditorCardItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06959c00;
  if (*(long **)(this + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe8) + 0x18))();
    *(undefined8 *)(this + 0xe8) = 0;
  }
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0xf0));
  PakRecord::~PakRecord((PakRecord *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorCardItem::~LevelEditorCardItem() */

void __thiscall LevelEditorCardItem::~LevelEditorCardItem(LevelEditorCardItem *this)

{
  ~LevelEditorCardItem(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorCardItem::SetData(LevelEditorCardInfo const&) */

void __thiscall LevelEditorCardItem::SetData(LevelEditorCardItem *this,LevelEditorCardInfo *param_1)

{
  GriditemBarrelZombieDes::operator=
            ((GriditemBarrelZombieDes *)(this + 0xd8),(GriditemBarrelZombieDes *)param_1);
  return;
}


/* LevelEditorCardItem::LevelEditorCardItem() */

void __thiscall LevelEditorCardItem::LevelEditorCardItem(LevelEditorCardItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06959c00;
  LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)(this + 0xd8));
  *(undefined8 *)(this + 0xe8) = 0;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0xf0));
  return;
}


/* LevelEditorCardItem::TouchEnded(Sexy::Touch const&) */

void __thiscall LevelEditorCardItem::TouchEnded(LevelEditorCardItem *this,Touch *param_1)

{
  if (*(int *)(this + 0xd4) != (int)*(undefined8 *)param_1) {
    return;
  }
  std::function<void(LevelEditorCardInfo_const&)>::operator()
            ((function<void(LevelEditorCardInfo_const&)> *)(this + 0xf0),
             (LevelEditorCardInfo *)(this + 0xd8));
  return;
}


/* LevelEditorCardItem::SetClickFunction(std::function<void (LevelEditorCardInfo const&)>) */

void __thiscall LevelEditorCardItem::SetClickFunction(LevelEditorCardItem *this,function *param_2)

{
  std::function<void(int,int,int,int,int,int,int,int)>::operator=
            ((function<void(int,int,int,int,int,int,int,int)> *)(this + 0xf0),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorCardItem::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorCardItem::Draw(LevelEditorCardItem *this,Graphics *param_1)

{
  int iVar1;
  bool bVar2;
  RenderEffectDefinition *pRVar3;
  RenderEffect *pRVar4;
  SeedPacketUtils *pSVar5;
  PacketRenderData *pPVar6;
  DeviceImage *pDVar7;
  code *pcVar8;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xe8) == 0) {
    iVar1 = *(int *)(this + 0xd8);
    if (2 < iVar1 - 4U) {
      bVar2 = iVar1 == 8;
      if (!bVar2) {
        if (iVar1 == 3) {
          pSVar5 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
          std::string::string(asStack_20,"");
          pPVar6 = (PacketRenderData *)
                   SeedPacketUtils::GetZombiePacketRenderData
                             (pSVar5,(string *)(this + 0xe0),asStack_20,-1);
          std::string::~string(asStack_20);
          nop();
          pDVar7 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(pSVar5,pPVar6,0,0)
          ;
          *(DeviceImage **)(this + 0xe8) = pDVar7;
        }
        else {
          if (iVar1 == 2) {
            pSVar5 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
            pPVar6 = (PacketRenderData *)
                     SeedPacketUtils::GetToolPacketRenderData(pSVar5,(string *)(this + 0xe0));
            pDVar7 = (DeviceImage *)
                     SeedPacketUtils::CreateDeviceImageForSeedPacket(pSVar5,pPVar6,0,0);
            *(DeviceImage **)(this + 0xe8) = pDVar7;
            SeedPacketUtils::DrawPacketToDeviceImage(pSVar5,pDVar7,pPVar6,false,-1,true,false);
            goto LAB_04b41888;
          }
          pSVar5 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
          pPVar6 = (PacketRenderData *)
                   SeedPacketUtils::GetPlantPacketRenderData
                             (pSVar5,(string *)(this + 0xe0),-1,-1,-1);
          pDVar7 = (DeviceImage *)
                   SeedPacketUtils::CreateDeviceImageForSeedPacket(pSVar5,pPVar6,0,(uint)bVar2);
          *(DeviceImage **)(this + 0xe8) = pDVar7;
        }
        SeedPacketUtils::DrawPacketToDeviceImage(pSVar5,pDVar7,pPVar6,bVar2,-1,bVar2,bVar2);
        goto LAB_04b41888;
      }
    }
    pSVar5 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    pPVar6 = (PacketRenderData *)
             SeedPacketUtils::GetLevelEditorRenderData(pSVar5,(string *)(this + 0xe0));
    pDVar7 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(pSVar5,pPVar6,0,0);
    *(DeviceImage **)(this + 0xe8) = pDVar7;
    SeedPacketUtils::DrawPacketToDeviceImage(pSVar5,pDVar7,pPVar6,false,-1,false,false);
  }
LAB_04b41888:
  if (this[0x6e] == (LevelEditorCardItem)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xe8),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  else {
    pRVar3 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_1);
    CachedResourcePtr::operator_cast_to_RenderEffectDefinition_((CachedResourcePtr *)&DAT_06b85a38);
    pRVar4 = (RenderEffect *)Sexy::Graphics3D::GetEffect(pRVar3);
    pcVar8 = *(code **)(*(long *)pRVar4 + 0x38);
    std::string::string(asStack_20,"Default");
    (*pcVar8)(pRVar4,asStack_20,1);
    std::string::~string(asStack_20);
    nop();
    Sexy::RenderEffectAutoState::RenderEffectAutoState
              ((RenderEffectAutoState *)asStack_20,param_1,pRVar4,1);
    while (bVar2 = Sexy::RenderEffectAutoState::operator_cast_to_bool
                             ((RenderEffectAutoState *)asStack_20), bVar2) {
      Sexy::Graphics::DrawImage
                (param_1,*(Image **)(this + 0xe8),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      Sexy::RenderEffectAutoState::operator++((RenderEffectAutoState *)asStack_20);
    }
    Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

