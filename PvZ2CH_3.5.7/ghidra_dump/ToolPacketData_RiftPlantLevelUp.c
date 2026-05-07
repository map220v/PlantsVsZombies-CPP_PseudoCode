// Class: ToolPacketData_RiftPlantLevelUp


/* ToolPacketData_RiftPlantLevelUp::StaticGetClass() */

long * ToolPacketData_RiftPlantLevelUp::StaticGetClass(void)

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
  uVar2 = ToolPacketData::StaticGetClass();
  (*pcVar3)(plVar1,"ToolPacketData_RiftPlantLevelUp",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketData_RiftPlantLevelUp::GetClass() const */

long * ToolPacketData_RiftPlantLevelUp::GetClass(void)

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
  uVar2 = ToolPacketData::StaticGetClass();
  (*pcVar3)(plVar1,"ToolPacketData_RiftPlantLevelUp",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketData_RiftPlantLevelUp::ToolPacketData_RiftPlantLevelUp() */

void __thiscall
ToolPacketData_RiftPlantLevelUp::ToolPacketData_RiftPlantLevelUp
          (ToolPacketData_RiftPlantLevelUp *this)

{
  ToolPacketData::ToolPacketData((ToolPacketData *)this);
  *(undefined ***)this = &PTR_GetClass_06849ac0;
  return;
}


/* ToolPacketData_RiftPlantLevelUp::StaticNew() */

ToolPacketData_RiftPlantLevelUp * ToolPacketData_RiftPlantLevelUp::StaticNew(void)

{
  ToolPacketData_RiftPlantLevelUp *this;
  
  this = ::operator_new(0x10);
  ToolPacketData_RiftPlantLevelUp(this);
  return this;
}


/* ToolPacketData_RiftPlantLevelUp::~ToolPacketData_RiftPlantLevelUp() */

void __thiscall
ToolPacketData_RiftPlantLevelUp::~ToolPacketData_RiftPlantLevelUp
          (ToolPacketData_RiftPlantLevelUp *this)

{
  *(undefined ***)this = &PTR_GetClass_06849ac0;
  ToolPacketData::~ToolPacketData((ToolPacketData *)this);
  return;
}


/* ToolPacketData_RiftPlantLevelUp::~ToolPacketData_RiftPlantLevelUp() */

void __thiscall
ToolPacketData_RiftPlantLevelUp::~ToolPacketData_RiftPlantLevelUp
          (ToolPacketData_RiftPlantLevelUp *this)

{
  ~ToolPacketData_RiftPlantLevelUp(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToolPacketData_RiftPlantLevelUp::CheckAllSeedPackets() */

void __thiscall
ToolPacketData_RiftPlantLevelUp::CheckAllSeedPackets(ToolPacketData_RiftPlantLevelUp *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UINewPVPTopZombieQueue *this_02;
  RtObject *this_03;
  long lVar5;
  int iVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  iVar6 = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if (this_02 != (UINewPVPTopZombieQueue *)0x0) {
LAB_0442fdb0:
    cVar1 = FUN_0442df1c(this_02[0x199]);
    if (cVar1 <= iVar6) goto LAB_0442fe84;
    UINewPVPTopZombieQueue::gettItem(this_02,iVar6);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
    if ((bVar2) &&
       (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20), cVar1 != '\0')) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      SeedPacket::GetPlantType();
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
      if (bVar2) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        SeedPacket::GetPlantType();
        cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
        if (cVar1 != '\0') {
          this_03 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
          bVar2 = Sexy::RtObject::IsA<SeedPacket_ToolRift>(this_03);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          if (!bVar2) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
            SeedPacket::GetPlantType();
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            FUN_05475d88(aRStack_18,lVar5 + 8);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            iVar3 = PlayerInfo::GetPlantStarLevel(this_01,(string *)aRStack_18,false);
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
            iVar4 = FUN_0442df18(*(undefined4 *)(lVar5 + 0x1cc));
            if (iVar3 <= iVar4) {
              std::string::~string((string *)aRStack_18);
              goto LAB_0442fda4;
            }
            std::string::~string((string *)aRStack_18);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
            goto LAB_0442fe54;
          }
          goto LAB_0442fda4;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
LAB_0442fda4:
    iVar6 = iVar6 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    goto LAB_0442fdb0;
  }
  goto LAB_0442fe54;
LAB_0442fe84:
  MessageRouter::Post<ToolPacketData*,ToolPacketData_RiftPlantLevelUp*>
            ((MessageRouter *)gMessageRouter,Message::NotifyToolPlantLevelUpMax,this);
LAB_0442fe54:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ToolPacketData_RiftPlantLevelUp::UseAt(Sexy::Point const&) */

undefined8 ToolPacketData_RiftPlantLevelUp::UseAt(Point *param_1)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  CheckAllSeedPackets((ToolPacketData_RiftPlantLevelUp *)param_1);
  return 1;
}

